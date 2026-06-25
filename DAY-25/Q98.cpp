#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
    char str1[100], str2[100];
    cin.getline(str1, 100);
    cin.getline(str2, 100);
    int freq[256] = {0};
    for(int i= 0; str2[i] != '\0'; i++)
        freq[(unsigned char)str2[i]]++;
    for (int i = 0; str1[i] != '\0'; i++) {
        if (freq[(unsigned char)str1[i]] > 0) {
            cout << str1[i] << " ";
            freq[(unsigned char)str1[i]] = 0;
        }
    }
    return 0;
}