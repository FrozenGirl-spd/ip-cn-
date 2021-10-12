#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }

  int res=0;
   for(int j=0;j<n;j++){
       res ^= input[j];
   }
   
   for (int k=0;k<n-1;k++){
       res ^= k;
   }
   cout<<(res);


    /* int sum=((n-2)*(n-1))/2;
    int array_sum=0;
    for(int j=0;j<n;j++){
        array_sum=array_sum+input[j];
    }
    cout<<array_sum-sum;
    */

    /* for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(input[j]==input[k]){
                cout<<input[j];
                break;
            }
        }
    } */

    return 0;
}
