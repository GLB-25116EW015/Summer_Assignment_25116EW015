#include <iostream>
using namespace std;
int findMaximum(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}
int main(){
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Maximum number="<< findMaximum(num1, num2);
    return 0;
}