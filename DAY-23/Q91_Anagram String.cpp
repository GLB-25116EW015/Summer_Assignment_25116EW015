#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int freq[256] = {0};
    for (int i = 0; i < str1.length(); i++) {
        freq[(unsigned char)str1[i]]++;
    }
    for (int i = 0; i < str2.length(); i++) {
        freq[(unsigned char)str2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }
    cout << "Anagram";
    return 0;
}