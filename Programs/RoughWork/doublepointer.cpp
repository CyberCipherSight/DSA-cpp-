#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int *p = &x;   // pointer to int
    int **dp = &p; // double pointer

    cout << "Value of x: " << x << endl;
    cout << "Value using single pointer: " << *p << endl;
    cout << "Value using double pointer: " << **dp << endl;

    return 0;
}
