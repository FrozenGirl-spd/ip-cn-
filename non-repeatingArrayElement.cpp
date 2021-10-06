#include <iostream>
using namespace std;



int main() {
    int a[]={1,4,7,7,4,9,6,1};
    int a_size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<a_size;i++){
        int j;
        for( j=0;j<a_size;j++){
            if(i!=j && a[i]==a[j]){
                break;
            }
           
        }
         if(j==a_size){
                cout<< a[i];
            }
    }


return 0;
}
