#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dup=0;
    int sum=0;
    while(n>0){
    int ld=n%10;
    int cube=ld*ld*ld;
    int sum=sum+cube;
    n/=10;
    }
    if(sum==dup){
        cout<<"it is an armstrong number";
    }
    else{
        cout<<"it's not an armstrong number";

    }
    return 0;
    
    }

