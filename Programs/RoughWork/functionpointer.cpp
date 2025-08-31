#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, Boss! Function pointer says Hi!" << endl;
}

int main() {
    void (*funcPtr)();  // function pointer declaration
    funcPtr = greet;    // assign function address

    // call function using pointer
    funcPtr();

    return 0;
}
