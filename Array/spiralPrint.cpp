#include <iostream>;
#include <vector>;
using namespace std;

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int startingRow = 0;
    int endingRow = v.size() - 1;
    int startingCol = 0;
    int endingCol = v[0].size() - 1;

    int totalElements = v.size() * v[0].size();
    int count = 0;
    vector<int> ans;

    while (count < totalElements)
    {
        // printing starting row
        for (int i = startingCol; i <= endingCol && count < totalElements; i++)
        {
            ans.push_back(v[startingRow][i]);
            count++;
        }
        startingRow++;

        // printing ending col
        for (int i = startingRow; i <= endingRow && count < totalElements; i++)
        {
            ans.push_back(v[i][endingCol]);
            count++;
        }
        endingCol--;

        // printing ending row
        for (int i = endingCol; i >= startingCol && count < totalElements; i--)
        {
            ans.push_back(v[endingRow][i]);
            count++;
        }
        endingRow--;

        // printing starting col
        for (int i = endingRow; i >= startingRow && count < totalElements; i--)
        {
            ans.push_back(v[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    cout << "Spiral Order: ";
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<vector<int>> v{
//         {1, 2, 3, 4},
//         {5, 6, 7, 8},
//         {9, 10, 11, 12},
//         {13, 14, 15, 16}};

//     int startingRow = 0;
//     int endingRow = v.size() - 1;
//     int startingCol = 0;
//     int endingCol = v[0].size() - 1;

//     int totalElements = v.size() * v[0].size();
//     int count = 0;
//     vector<int> ans;

//     while (count < totalElements)
//     {
//         // pringting starting row
//         for (int i = startingCol; i <= endingCol && count < totalElements; i++)
//         {
//             ans.push_back(v[startingRow][i]);
//             count++;
//         }
//         startingRow++;

//         // priting ending col
//         for (int i = startingRow; i <= endingRow && count < totalElements; i++)
//         {
//             ans.push_back(v[i][endingCol]);
//             count++;
//         }
//         endingCol--;

//         // priting ending Row
//         for (int i = endingCol; i >= startingCol && count < totalElements; i--)
//         {
//             ans.push_back(v[endingRow][i]);
// count++;
//         }
//         endingRow--;

//         // printing starting col
//         for (int i = endingRow; i >= startingRow && count < totalElements; i--)
//         {
//             ans.push_back(v[i][startingCol]);
//             count++;
//         }
//         startingCol++;
//     }

//     cout << "Spiral Order: ";

//     for (auto i : ans)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }