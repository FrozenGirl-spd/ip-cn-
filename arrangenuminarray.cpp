#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
 
  int a[100];
if(n%2==0){
  {
       for(int i=1;i<n;i+=2) {
      cout<<i;
  }
  for(int j=n;j>1;j-=2){
      cout<<j;
  }
  }}
    if(n%2!=0){
       for(int i=1;i<=n;i+=2) {
      cout<<i;
  }
  for(int j=n-1;j>1;j-=2){
      cout<<j;
  }
  }

    

 
 
    return 0;

}
