#include <iostream>
#include <string>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

int main()
{
    Contact c[100];
    int n = 0, choice;

    do
    {
        cout << "\n1.Add Contact\n2.Display Contacts\n3.Search Contact\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, c[n].name);
            cout << "Enter Phone: ";
            getline(cin, c[n].phone);
            n++;
        }
        else if (choice == 2)
        {
            for (int i = 0; i < n; i++)
            {
                cout << c[i].name << " - " << c[i].phone << endl;
            }
        }
        else if (choice == 3)
        {
            string name;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);

            bool found = false;

            for (int i = 0; i < n; i++)
            {
                if (c[i].name == name)
                {
                    cout << c[i].name << " - " << c[i].phone << endl;
                    found = true;
                }
            }

            if (!found)
                cout << "Contact Not Found\n";
        }

    } while (choice != 4);

    return 0;
}