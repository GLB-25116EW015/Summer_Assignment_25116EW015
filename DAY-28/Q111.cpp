#include <iostream>
#include <string>
using namespace std;

struct Ticket
{
    int seat;
    string name;
    bool booked;
};

int main()
{
    Ticket t[10];

    for (int i = 0; i < 10; i++)
    {
        t[i].seat = i + 1;
        t[i].booked = false;
    }

    int choice;

    do
    {
        cout << "\n1.Book Ticket\n2.Cancel Ticket\n3.Display Seats\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int seat;
            cout << "Enter Seat Number: ";
            cin >> seat;

            if (seat >= 1 && seat <= 10)
            {
                if (!t[seat - 1].booked)
                {
                    cin.ignore();
                    cout << "Enter Name: ";
                    getline(cin, t[seat - 1].name);
                    t[seat - 1].booked = true;
                    cout << "Ticket Booked\n";
                }
                else
                {
                    cout << "Seat Already Booked\n";
                }
            }
        }
        else if (choice == 2)
        {
            int seat;
            cout << "Enter Seat Number: ";
            cin >> seat;

            if (seat >= 1 && seat <= 10)
            {
                t[seat - 1].booked = false;
                t[seat - 1].name = "";
                cout << "Booking Cancelled\n";
            }
        }
        else if (choice == 3)
        {
            for (int i = 0; i < 10; i++)
            {
                cout << "Seat " << t[i].seat << " : ";
                if (t[i].booked)
                    cout << "Booked by " << t[i].name;
                else
                    cout << "Available";
                cout << endl;
            }
        }

    } while (choice != 4);

    return 0;
}