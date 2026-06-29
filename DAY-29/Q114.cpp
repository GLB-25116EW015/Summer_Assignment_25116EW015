#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, i, pos, value;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    do {
        cout << "\n1. Display Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                cout << "Enter position: ";
                cin >> pos;
                cout << "Enter value: ";
                cin >> value;

                if (pos >= 1 && pos <= n + 1) {
                    for (i = n; i >= pos; i--)
                        arr[i] = arr[i - 1];
                    arr[pos - 1] = value;
                    n++;
                } else {
                    cout << "Invalid position\n";
                }
                break;

            case 3:
                cout << "Enter position: ";
                cin >> pos;

                if (pos >= 1 && pos <= n) {
                    for (i = pos - 1; i < n - 1; i++)
                        arr[i] = arr[i + 1];
                    n--;
                } else {
                    cout << "Invalid position\n";
                }
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> value;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        cout << "Element found at position " << i + 1 << endl;
                        break;
                    }
                }
                if (i == n)
                    cout << "Element not found\n";
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