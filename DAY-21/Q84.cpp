#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for (char &ch:str) {
        ch = toupper(ch);
    }
    cout << str;
    return 0;
}