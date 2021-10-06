#include <iostream>
using namespace std;



int main() {
    int a[]={2 ,8 ,10, 5, -2, 5};
   int n=10;
   int count=0;
    int a_size=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<a_size;i++){
        
        for( int j=i+1;j<a_size;j++){
            if(a[i]+a[j]==n){
                count++;
                
            }
           
        }
         
    }
cout<<count;

return 0;
}
