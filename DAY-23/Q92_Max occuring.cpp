#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int freq[256] = {0};
    for (int i = 0; i < str.length(); i++) {
        freq[(unsigned char)str[i]]++;
    }
    char maxChar = str[0];
    int maxFreq = freq[(unsigned char)str[0]];
    for (int i = 1; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    cout << maxChar;
    return 0;
}