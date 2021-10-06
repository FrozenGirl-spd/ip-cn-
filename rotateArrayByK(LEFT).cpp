#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int a[]={1, 2 ,3 ,4 ,5 ,6 ,7};
    int a_size=sizeof(a)/sizeof(a[0]);
    int d;
    cin>>d;
     for(int i=d;i<a_size;i++){
       
            cout<<a[i]<<" ";
        
    }
    for(int i=0;i<d;i++){
        
            cout<<a[i]<<" ";
        
    }
   


return 0;
}
