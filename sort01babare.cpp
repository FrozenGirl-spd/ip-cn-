#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int a[]={1, 0, 1, 1,5,0,6, 1,8, 9,0, 1};
    int a_size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<a_size;i++){
        if(a[i]==0){
            cout<<a[i]<<" ";
        }
    }
    for(int i=0;i<a_size;i++){
        if(a[i]!=0 && a[i]!=1){
            cout<<a[i]<<" ";
        }
    }
     for(int i=0;i<a_size;i++){
        if(a[i]==1){
            cout<<a[i]<<" ";
        }
    }


return 0;
}
