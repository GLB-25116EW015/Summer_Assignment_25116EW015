#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    int visited[256] = {0};
    for (int i = 0; i < str.length(); i++) {
        if (visited[(unsigned char)str[i]] == 0) {
            cout << str[i];
            visited[(unsigned char)str[i]] = 1;
        }
    }
    return 0;
}