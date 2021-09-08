#include <iostream>
using namespace std;

void selectionSort(int A[],int n){
    for (int i=0;i<n;i++) {
        int min=A[i];
        int minIndex=i;
        for(int j=i+1;j<n;j++) {
            if(A[j]<min) {
                min=A[j];
                minIndex=j;
            }
        }
        int temp=A[i];
        A[i]=A[minIndex];
        A[minIndex]=temp;
    }
}

void bubbleSort(int A[], int n) {
    for(int i=0;i<n-1;i++) {
        for (int j=0;j<n-1-i;j++) {
            if(A[j]>A[j+1]) {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main(){
    int A[]={5,2,0,1,6,9,89,56,14,3};
    int n=sizeof(A)/sizeof(int);
    
    bubbleSort(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }


    return 0;
}