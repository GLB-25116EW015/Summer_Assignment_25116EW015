#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    string longest = "";
    string word = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (word.length() > longest.length())
                longest = word;
            word = "";
        } else {
            word += str[i];
        }
    }

    cout << longest;
    return 0;
}