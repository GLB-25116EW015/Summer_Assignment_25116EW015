#include <iostream>
using namespace std;
int main(){
    int choice;
    double balance = 10000, amount;
    do {
        cout << "\nATM Menu\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Current Balance: " << balance << endl;
            break;
        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;
            balance += amount;
            cout << "Deposit Successful.\n";
            break;
        case 3:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawal Successful.\n";
            } else {
                cout << "Insufficient Balance.\n";
            }
            break;
        case 4:
            cout << "Thank you for using the ATM.\n";
            break;
        default:
            cout << "Invalid Choice.\n";
        }
    } while (choice != 4);
    return 0;
}