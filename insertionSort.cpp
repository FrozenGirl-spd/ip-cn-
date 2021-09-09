#include <iostream>
using namespace std;

void insertionSort(int A[], int n) {

    for(int i=1;i<n;i++) {
        int current=A[i];
        int j;
        for(j=i-1;j>=0;j--) {
            if(current<A[j]) {
                A[j+1]=A[j];
            }
            else {
                break;
            }
        }
        A[j+1]=current;
    }

}

int main() {
    

int A[]={12,5,18,42,13,0,122,2};
int n=sizeof(A)/sizeof(int);
insertionSort(A,n);
for(int i=0;i<n;i++) {
    cout<<A[i]<<" ";
}

return 0;
}
