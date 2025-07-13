#include <iostream>
#include <limits.h>
#include <vector>
#include <tuple>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40, 50};
    vector<tuple<int, int, int>> tripletResult;
    int sum = 60;

    for (int i = 0; i < arr.size(); i++)
    {
        int element1 = arr[i];

        for (int j = i + 1; j < arr.size(); j++)
        {
            int element2 = arr[j];

            for (int k = j + 1; k < arr.size(); k++)
            {
                if ((element1 + element2 + arr[k]) == sum)
                {
                    tripletResult.push_back(make_tuple(element1, element2, arr[k]));
                }
            }
        }
    }

    // Print the result
    cout << "Triplets with sum = " << sum << " are:" << endl;
    for (auto &t : tripletResult)
    {
        cout << "(" << get<0>(t) << ", " << get<1>(t) << ", " << get<2>(t) << ")" << endl;
    }

    return 0;
}