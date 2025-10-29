#include <vector>
#include <numeric>
using namespace std;

class Solution
{
public:
    int isPossiblesol(vector<int> &arr, int k, int mid)
    {
        int BoardSum = 0;
        int c = 1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > mid)
            {
                return false;
            }
            if (arr[i] + BoardSum > mid)
            {
                c++;
                BoardSum = arr[i];
                if (c > k)
                {
                    return false;
                }
            }
            else
            {
                BoardSum += arr[i];
            }
        }
        return true;
    }
    int minTime(vector<int> &arr, int k)
    {
        // code here
        int s = 0;
        int e = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (isPossiblesol(arr, k, mid))
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};