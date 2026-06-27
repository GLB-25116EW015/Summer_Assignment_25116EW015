#include <iostream>
using namespace std;
int main(){
    int score = 0, answer;
    cout << "Quiz Application\n\n";
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;
    cout << "\n2. Which language is mainly used for system programming?\n";
    cout << "1. Python\n2. HTML\n3. C++\n4. CSS\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;
    cout << "\n3. How many days are there in a leap year?\n";
    cout << "1. 365\n2. 364\n3. 366\n4. 367\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;
    cout << "\nYour Score: " << score << "/3\n";
    return 0;
}