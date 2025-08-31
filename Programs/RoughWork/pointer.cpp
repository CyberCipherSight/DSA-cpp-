#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;  // pointer to x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Address stored in pointer: " << ptr << endl;

    return 0;
}
