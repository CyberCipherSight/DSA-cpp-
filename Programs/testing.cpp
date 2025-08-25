#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_four(int a, int b, int c, int d)
{

    int big;
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                big = a;
            }
            else
                big = d;
        }
        else if (c > d)
        {
            big = c;
        }
    }
    else
        big = b;

    cout << big;

    return 0;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    max_four(a, b, c, d);

    return 0;
}
