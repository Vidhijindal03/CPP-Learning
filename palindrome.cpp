#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int revnum = 0;
    int dup=n;
    while(n>0){
        int ld = n%10;
        revnum=(revnum*10)+ld;
        n=n/10;
    }
    if(dup==revnum)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}