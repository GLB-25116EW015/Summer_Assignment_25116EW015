#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    string title[100];
    string author[100];

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << endl;

        cout << "Enter Title: ";
        getline(cin, title[i]);

        cout << "Enter Author: ";
        getline(cin, author[i]);
    }

    cout << "\n------ Library Records ------\n";

    for (int i = 0; i < n; i++) {
        cout << "\nTitle  : " << title[i];
        cout << "\nAuthor : " << author[i] << endl;
    }

    return 0;
}