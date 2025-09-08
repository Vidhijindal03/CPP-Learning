#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<2*n-2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=2;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=1;j<2*i;j++){
            cout<<" ";
        }
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
}
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}
