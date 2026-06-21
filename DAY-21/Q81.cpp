#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int length=0;
    for (char ch:str) {
        length++;
    }
    cout<<length;
    return 0;
}