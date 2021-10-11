#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n = 154;
    int x=n;
    int reverse=0;
    int sum=0;
    while(n>0){
        int last_digit=n%10;
        sum=sum+pow(last_digit,3);
        n=n/10;
    }
    if(sum==x){     cout<<"yes";}
    else cout<<"no";

    return 0;
}
