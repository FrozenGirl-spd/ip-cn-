#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(int* a, int size){
    vector<int> output;
    unordered_map<int,bool> seen;
    for(int i=0;i<size;i++){
        if(seen.count(a[i])>0){
            continue;
        }
        seen[a[i]]=true;
        output.push_back(a[i]);
    }
    return output;
}


int main() {
    int a[]={1,2,6,2,1,5,8,2,2,3,8,9,9};
    int size=sizeof(a)/sizeof(int);
    vector<int> output=removeDuplicate(a,size);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
    return 0;
}
