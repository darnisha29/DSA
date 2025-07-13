// find a pair that upon addition give value eual to sum(sum = 9)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 3, 5, 7, 2, 4, 6};
    int sum = 9;

    // Vector to store pairs
    vector<pair<int, int>> result;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((element + arr[j]) == sum)
            {
                // Store the pair
                result.push_back({element, arr[j]});
            }
        }
    }

    // Print the result
    cout << "Pairs with sum = " << sum << " are:" << endl;
    for (auto &p : result)
    {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }

    return 0;
}

// #include <iostream>
// #include <limits.h>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr{1, 3, 5, 7, 2, 4, 6};
//     int sum = 9;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         int element = arr[i];
//         cout << "We are at element :: " << element << endl;

//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             cout << "(" << element << "+" << arr[j] << ")" << endl;
//             if ((element + arr[j]) == sum)
//             {
//                 cout << "get elements pair upon addition give value equal to sum ::: " << element << "+" << arr[j] << "=" << (element + arr[j]) << endl;
//             }
//         }
//     }
// }
