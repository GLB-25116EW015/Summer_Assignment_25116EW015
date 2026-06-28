#include <iostream>
#include <string>
using namespace std;

struct Account
{
    int accNo;
    string name;
    float balance;
};

int main()
{
    Account acc[100];
    int n = 0, choice;

    do
    {
        cout << "\n1.Create Account\n2.Display Accounts\n3.Deposit\n4.Withdraw\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Account Number: ";
            cin >> acc[n].accNo;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, acc[n].name);
            cout << "Enter Initial Balance: ";
            cin >> acc[n].balance;
            n++;
        }
        else if (choice == 2)
        {
            for (int i = 0; i < n; i++)
            {
                cout << acc[i].accNo << " "
                     << acc[i].name << " "
                     << acc[i].balance << endl;
            }
        }
        else if (choice == 3)
        {
            int no;
            float amt;
            cout << "Enter Account Number: ";
            cin >> no;
            cout << "Enter Amount: ";
            cin >> amt;

            for (int i = 0; i < n; i++)
            {
                if (acc[i].accNo == no)
                {
                    acc[i].balance += amt;
                    cout << "Deposit Successful\n";
                }
            }
        }
        else if (choice == 4)
        {
            int no;
            float amt;
            cout << "Enter Account Number: ";
            cin >> no;
            cout << "Enter Amount: ";
            cin >> amt;

            for (int i = 0; i < n; i++)
            {
                if (acc[i].accNo == no)
                {
                    if (amt <= acc[i].balance)
                    {
                        acc[i].balance -= amt;
                        cout << "Withdrawal Successful\n";
                    }
                    else
                    {
                        cout << "Insufficient Balance\n";
                    }
                }
            }
        }

    } while (choice != 5);

    return 0;
}