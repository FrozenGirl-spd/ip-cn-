#include <iostream>
using namespace std;

void findElement(int m, int n, int a[][100],int x){
    int i=0,j=n-1;
    
    while(i<m && j>=0){
        if(a[i][j]==x){
            cout<<i<<" "<<j;
            return;
        }
        else if(x>a[i][j]){
            i++;
        }
        else j--;
    }
    cout<<"-1";
}

int main() {
    int m,n;
    cin>>m>>n;
    int a[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    findElement(m,n,a,x);
    
}
