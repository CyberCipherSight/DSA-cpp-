#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    void setName(string name) {
        this->name = name;  // 'this' pointer used
    }

    void showName() {
        cout << "Student Name: " << this->name << endl;
    }
};

int main() {
    Student s1;
    s1.setName("Rahul");
    s1.showName();
    return 0;
}
