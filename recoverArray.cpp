#include <iostream>
using namespace std;

void recoverArray(int input[],int n, int output[]){
    int mid=n/2;
    int l=0,r=0;
    int i=0;
    if(n%2!=0){
        output[mid] = input[i];
        l=mid-1;
        r=mid+1;
        i++;
    }
    else{
        l=mid;
        r=mid+1;
    }
    while(i<n){
        
        output[l]=input[i];
        l--;
        i++;
        output[r]=input[i];
        r++;
        i++;

    }
    


}

int main() {

    int n;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int output[100];

    recoverArray(input,n,output);
    for(int j=0;j<n;j++){
        cout<<output[j]<<" ";
    }
    return 0;
}
