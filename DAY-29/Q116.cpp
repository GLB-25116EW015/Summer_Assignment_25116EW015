#include <iostream>
using namespace std;

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    Item item[100];
    int n = 0, choice, i, searchId;

    do {
        cout << "\n1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter ID: ";
                cin >> item[n].id;
                cout << "Enter Name: ";
                cin >> item[n].name;
                cout << "Enter Quantity: ";
                cin >> item[n].quantity;
                cout << "Enter Price: ";
                cin >> item[n].price;
                n++;
                break;

            case 2:
                cout << "\nID\tName\tQuantity\tPrice\n";
                for (i = 0; i < n; i++) {
                    cout << item[i].id << "\t"
                         << item[i].name << "\t"
                         << item[i].quantity << "\t\t"
                         << item[i].price << endl;
                }
                break;

            case 3:
                cout << "Enter Item ID: ";
                cin >> searchId;

                for (i = 0; i < n; i++) {
                    if (item[i].id == searchId) {
                        cout << "ID: " << item[i].id << endl;
                        cout << "Name: " << item[i].name << endl;
                        cout << "Quantity: " << item[i].quantity << endl;
                        cout << "Price: " << item[i].price << endl;
                        break;
                    }
                }

                if (i == n)
                    cout << "Item not found\n";
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}