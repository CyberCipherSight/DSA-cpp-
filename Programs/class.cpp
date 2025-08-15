#include <iostream>
using namespace std;

class MyClass {
public:
    void greet() {
        cout << "Hi from MyClass!" << endl;
    }
};

int main() {
    MyClass obj;
    obj.greet();
    return 0;
}
