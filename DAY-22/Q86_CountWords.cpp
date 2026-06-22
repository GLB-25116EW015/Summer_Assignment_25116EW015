#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (ch != ' ' && !inWord) {
            count++;
            inWord = true;
        }
        else if (ch == ' ') {
            inWord = false;
        }
    }
    cout << count;
    return 0;
}