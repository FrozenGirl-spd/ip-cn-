#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int r,c;
	for(r=0;r<n;r+=2){
	    for(c=1;c<=n;c++){
	        cout<<n*r+c<<" ";
	    }
	    cout<<endl;
	}
	if(n%2==0) r=n+1;
	else r=n;
	r-=2;
	for(;r>=1;r-=2){
	    for(c=1;c<=n;c++){
	        cout<<n*r+c<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}