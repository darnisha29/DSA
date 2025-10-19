#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    cout << "target" << target << endl;
    cout << "end" << end << endl;
    cout << "start" << start << endl;
    // for (auto value : v)
    // {
    //     cout << value << endl;
    // };

    while (start <= end)
    {
        cout << "in while loop" << v[mid] << endl;
        if (v[mid] == target)
        {
            cout << "fount target at index :: " << mid << " of digit :: " << v[mid] << endl;
            ans = mid;
            cout << "ans :: " << ans;
            end = mid - 1;
        }
        else if (v[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << "after while ans" << ans;

    return ans;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 11};
    int target = 11;
    int fiteroccurIndex = firstOccurence(v, target);
    if (fiteroccurIndex != -1)
    {
        cout << "Find First Occurrence of digit " << target << " at Index " << fiteroccurIndex << endl;
    }
    else
    {
        cout << "not found" << fiteroccurIndex << endl;
    }

    return 0;
}