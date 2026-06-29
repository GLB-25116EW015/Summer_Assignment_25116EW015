#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    int choice;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    do {
        cout << "\n1. Find Length\n";
        cout << "2. Copy String\n";
        cout << "3. Concatenate String\n";
        cout << "4. Compare Strings\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Length = " << strlen(str1) << endl;
                break;

            case 2:
                strcpy(str2, str1);
                cout << "Copied String: " << str2 << endl;
                break;

            case 3:
                cout << "Enter second string: ";
                cin.getline(str2, 100);
                strcat(str1, str2);
                cout << "Concatenated String: " << str1 << endl;
                break;

            case 4:
                cout << "Enter second string: ";
                cin.getline(str2, 100);
                if (strcmp(str1, str2) == 0)
                    cout << "Strings are equal\n";
                else
                    cout << "Strings are not equal\n";
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 5);

    return 0;
}