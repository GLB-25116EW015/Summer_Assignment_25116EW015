#include <iostream>
#include <string>
using namespace std;
int main(){
    int id;
    string name, department;
    double salary;
    cout << "Enter Employee ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Department: ";
    getline(cin, department);
    cout << "Enter Salary: ";
    cin >> salary;
    cout << "\n----- Employee Details -----\n";
    cout << "Employee ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Salary: " << salary << endl;
    return 0;
}