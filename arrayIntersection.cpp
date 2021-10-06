#include <iostream>
using namespace std;



int main() {
    int a[]={1,4,7,9};
    int b[]={7,6,1,4,2};
    int a_size=sizeof(a)/sizeof(a[0]);
    int b_size=sizeof(b)/sizeof(b[0]);
    for(int i=0;i<a_size;i++){
        
        for( int j=0;j<a_size;j++){
            if(a[i]==b[j]){
                cout<<a[i];
                
            }
           
        }
         
    }


return 0;
}
