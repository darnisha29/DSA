#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSol(vector<int> cooksRank, int nP, int mid)
{
    int currp = 0; // intial cooked parata count;
    for (int i = 0; i < cooksRank.size(); i++)
    {
        int R = cooksRank[i], j = 1;
        int timeTaken = 0;

        while (true)
        {
            if (timeTaken + j * R <= mid)
            {
                ++currp;
                timeTaken = j * R;
                ++j;
            }
            else
            {
                break;
            }
        }
        if (currp >= nP)
        {
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int> cooksRank, int nP)
{
    int start = 0;
    int highestRank = *max_element(cooksRank.begin(), cooksRank.end());
    int end = highestRank * (nP * (nP + 1) / 2);
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSol(cooksRank, nP, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int nP;
        int nC;
        cin >> nP >> nC;
        vector<int> cooksRank;
        while (nC--)
        {
            int R;
            cin >> R;
            cooksRank.push_back(R);
        }

        cout << minTimeToCompleteOrder(cooksRank, nP);
    }
    return 0;
}