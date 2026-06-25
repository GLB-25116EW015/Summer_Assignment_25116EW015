#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cin>>n1;
    int a[100], b[100], c[200];
    for (int i= 0; i < n1; i++)
        cin >>a[i];
    cin >> n2;
    for (int i= 0; i < n2; i++)
        cin >>b[i];
    int i = 0,j=0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i]<= b[j])
            c[k++] = a[i++];
        else
            c[k++]= b[j++];
    }
    while(i<n1)
        c[k++] = a[i++];
    while(j<n2)
        c[k++]=b[j++];
    for (int i=0;i< k; i++)
        cout<<c[i] << " ";
    return 0;
}