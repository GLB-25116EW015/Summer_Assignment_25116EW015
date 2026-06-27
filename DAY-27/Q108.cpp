#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    int roll;
    float m1, m2, m3, total, percentage;
    cout <<"Enter Student Name: ";
    getline(cin, name);
    cout <<"Enter Roll Number: ";
    cin >> roll;
    cout <<"Enter Marks in Subject 1: ";
    cin >> m1;
    cout <<"Enter Marks in Subject 2: ";
    cin >> m2;
    cout <<"Enter Marks in Subject 3: ";
    cin >> m3;
    total = m1 + m2 + m3;
    percentage = total / 3;
    cout <<"\n----- Marksheet -----\n";
    cout <<"Name: " << name << endl;
    cout <<"Roll Number: " << roll << endl;
    cout <<"Total Marks: " << total << endl;
    cout <<"Percentage: " << percentage << "%" << endl;
    if (percentage>= 90)
        cout << "Grade:A+" << endl;
    else if (percentage >= 75)
        cout << "Grade: A" << endl;
    else if (percentage>= 60)
        cout << "Grade: B" << endl;
    else if (percentage >=40)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: F"<< endl;
    return 0;
}