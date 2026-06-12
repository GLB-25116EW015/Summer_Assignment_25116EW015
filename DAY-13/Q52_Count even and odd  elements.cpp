#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[100];
    int evencount = 0;
    int oddcount = 0;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evencount++;
        } else {
            oddcount++;
        }
    }
    cout << "Even Elements = " << evencount << endl;
    cout << "Odd Elements = " << oddcount;
    return 0;
}