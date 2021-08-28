#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i,j,k,l;
    for(i=1;i<=n;i++) {
        for (j=1;j<=n-i;j++){
            cout<<" ";
        }
        int temp=i;
        for (int k=1;k<=i;k++){
            cout<<temp;
            temp++;
        }
        temp--;
        for(int l=1;l<i;l++){
            temp--;
            cout<<temp;
           
        }

        cout<<endl;
    }
return 0;
}