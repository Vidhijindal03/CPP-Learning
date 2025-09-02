#include<bits/stdc++.h>
using namespace std;
//Pass by reference

void operation(string &s){
    s[0]='c';
    cout<<s<<endl;
}
int main(){
    string s="man";
    operation(s);
    cout<<s<<endl;
    return 0;
}