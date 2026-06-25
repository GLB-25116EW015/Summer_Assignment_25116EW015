#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char names[50][100], temp[100];
    for (int i = 0; i < n; i++)
        cin.getline(names[i], 100);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << names[i] << endl;
    return 0;
}