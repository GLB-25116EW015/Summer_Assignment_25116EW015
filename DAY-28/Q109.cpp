#include <iostream>
#include <string>
using namespace std;
struct Book
{
    int id;
    string title;
    string author;
    bool issued;
};
int main()
{
    Book books[100];
    int n = 0, choice;
    do
    {
        cout << "\n1.Add Book\n2.Display Books\n3.Issue Book\n4.Return Book\n5.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Book ID: ";
            cin >> books[n].id;
            cin.ignore();
            cout << "Enter Title: ";
            getline(cin, books[n].title);
            cout << "Enter Author: ";
            getline(cin, books[n].author);
            books[n].issued = false;
            n++;
        }
        else if (choice == 2)
        {
            for (int i = 0; i < n; i++)
            {
                cout << books[i].id << " "
                     << books[i].title << " "
                     << books[i].author << " ";
                if (books[i].issued)
                    cout << "Issued";
                else
                    cout << "Available";
                cout << endl;
            }
        }
        else if (choice == 3)
        {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (books[i].id == id)
                {
                    books[i].issued = true;
                    cout << "Book Issued\n";
                }
            }
        }
        else if (choice == 4)
        {
            int id;
            cout << "Enter Book ID: ";
            cin >> id;

            for (int i = 0; i < n; i++)
            {
                if (books[i].id == id)
                {
                    books[i].issued = false;
                    cout << "Book Returned\n";
                }
            }
        }

    } while (choice != 5);

    return 0;
}