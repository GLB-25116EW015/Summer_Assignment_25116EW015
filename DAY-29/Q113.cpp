#include <iostream>
using namespace std;

int main() {
	int choice;
	double a, b;

	do {
		cout << "\n1.Addition \n ";
		cout << "2.Subtration \n ";
		cout << "3.Multipliction \n ";
		cout << "4 Division \n ";
		cout << "5. Exit \n ";
		cout << " Enter your choice: ";
		cin >> choice;

		if(choice >=1 && choice <4) {
			cout << "Enter two number: ";
			cin >> a >> b ;
		}
		switch(choice) {
		case 1:
			cout << "Result: " << a + b << endl;
			     break;

		case 2:
			cout << "Result: " << a - b << endl;
			     break;

		case 3:
			cout << "Result: " << a * b << endl;
			     break;

		case 4:
			if (b!=0)
				cout << "Result: " << a / b << endl;
				     else
					     cout << "Division with zero not allowed \n";
					          break;

		case 5:
			cout << "Exiting..." << endl;
			     break;

		default:
			cout << "Invalid choice. \n";
		}
    }while (choice != 5);

		return 0;
	}
 














    