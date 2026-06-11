#include <iostream>
using namespace std;
long long findFactorial(int n){
    long long factorial = 1;
    for (int i = 1; i <= n; i++){
        factorial*= i;
    }
    return factorial;
}
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial = " << findFactorial(number);
    return 0;
}