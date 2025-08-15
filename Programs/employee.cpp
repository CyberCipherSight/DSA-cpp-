#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string empl_name;
    int empl_id;
    string empl_department;

    void input() {
        cout << "Enter employee name: ";
        getline(cin, empl_name);
        cout << "Enter employee ID: ";
        cin >> empl_id;
        cin.ignore(); 
        cout << "Enter employee department: ";
        getline(cin, empl_department);
    }

    void display() {
        cout << "\nemployee name: " << empl_name << endl;
        cout << "employee ID: " << empl_id << endl;
        cout << "employee eepartment: " << empl_department << endl;
    }
};

int main() {
    Employee emp;
    emp.input();
    emp.display();
    return 0;
}
