#include <iostream>
#include <vector>
using namespace std;

int solve(int divisor, int dividend)
{

    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        if (abs(divisor * mid) == abs(dividend))
        {
            if ((divisor < 0 && dividend < 0) || (dividend > 0 && divisor > 0))
            {

                return mid;
            }
            else
            {
                return -mid;
            }
        }
        if (abs(divisor * mid) > abs(dividend))
        {
            e = mid - 1;
        }
        if (abs(divisor * mid) < abs(dividend))
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    if ((divisor < 0 && dividend < 0) || (dividend > 0 && divisor > 0))
    {
        return ans;
    }
    else
    {

        return -ans;
    }
}

int main()
{
    int divisor = 7;
    int dividend = -22;

    double solution = solve(divisor, dividend);
    cout << "Soluntion is :: " << endl;
    cout << solution << endl;

    double step = 0.1;
    for (int i = 0; i < 3; i++)
    {
        for (double j = abs(solution); abs(j * divisor) <= abs(dividend); j = j + step)
        {
            solution = j;
        }
    }

    cout << "value with precision :: " << endl;
    if ((divisor < 0 && dividend < 0) || (dividend > 0 && divisor > 0))
    {

        cout << solution << endl;
    }
    else
    {
        cout << -solution << endl;
    }
}
