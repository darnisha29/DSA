#include <iostream>;
#include <vector>;
using namespace std;

void wawePrint(vector<vector<int>> v)
{
    int m = v.size();
    int n = v[0].size();
    for (int startCol = 0; startCol < n; startCol++)
    {
        if (startCol % 2 == 0)
        {
            for (int row = 0; row < m; row++)
            {
                cout << v[row][startCol] << " ";
            }
        }
        else
        {
            for (int row = m - 1; row >= 0; row--)
            {
                cout << v[row][startCol] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    wawePrint(v);

    return 0;
}