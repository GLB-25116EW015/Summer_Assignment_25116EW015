#include <iostream>
#include <string>
using namespace std;

int roll[100];
string name[100];
float marks[100];
int n;

void input() {
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll No: ";
        cin >> roll[i];

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[i]);

        cout << "Enter Marks: ";
        cin >> marks[i];
    }
}

void display() {
    cout << "\n------ Student Records ------\n";

    for (int i = 0; i < n; i++) {
        cout << "\nRoll No : " << roll[i];
        cout << "\nName    : " << name[i];
        cout << "\nMarks   : " << marks[i] << endl;
    }
}

void search() {
    int r;
    cout << "\nEnter Roll Number to search: ";
    cin >> r;

    for (int i = 0; i < n; i++) {
        if (roll[i] == r) {
            cout << "\nRecord Found";
            cout << "\nName  : " << name[i];
            cout << "\nMarks : " << marks[i] << endl;
            return;
        }
    }

    cout << "Record Not Found";
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management =====";
        cout << "\n1. Input";
        cout << "\n2. Display";
        cout << "\n3. Search";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                input();
                break;

            case 2:
                display();
                break;

            case 3:
                search();
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}