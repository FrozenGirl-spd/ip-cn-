#include <iostream>
using namespace std;

void selectionSort(int A[5], int n) {
    for(int i=0;i<n-1;i++) {
        int min=A[i];
        int minIndex=i;
        for (int j=i+1;j<n;j++) {
            if (A[j]<min) {
                min=A[j];
                minIndex=j;
            }
        }
        int temp=A[i];
        A[i]=A[minIndex];
        A[minIndex]=temp;
        
    }
}

int main() {
    int A[5]={5,1000,200,315,57};
    selectionSort(A,5);
    for(int i=0;i<5;i++) {
        cout<<A[i]<<" ";
    }
    return 0;
}
