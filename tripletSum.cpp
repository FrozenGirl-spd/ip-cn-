#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumTriplet(int a[], int n, int a_size)
{
    int count=0;
      int i=0,j=0,k=0;
        for(int i=0;i<a_size-2;i++){
        
        for( int j=i+1;j<a_size-1;j++){
            
                for (int k=j+1;k<a_size;k++)
            
            if(a[i]+a[j]+a[k]==n)
                    count++;
                 
            
             
            } 
        }
        return count;
}

int main() {
    int a[]={2 ,-5 ,8 ,-6 ,0 ,5 ,10 ,11 ,-3};
   int n=10;
 
 
    int a_size=sizeof(a)/sizeof(a[0]);
    

         
    
cout<<sumTriplet(a,n,a_size);

return 0;
}
