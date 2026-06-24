#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    int freq[256]={0};
    for (int i=0;i<str.length();i++){
        freq[(unsigned char)str[i]]++;
        if(freq[(unsigned char)str[i]]==2){
            cout<<str[i];
            return 0;
        }
    }
    cout << "No repeating character found";
    return 0;
}