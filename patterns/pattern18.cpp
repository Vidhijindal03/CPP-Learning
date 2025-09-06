#include<iostream>
using namespace std;
void pattern(int n){
    char alphabet='A';
    for(int i=0;i<=n;i++){
    //for space
    for(char ch='A';ch<'A'+n-i;ch++){
    cout<<" ";
    }
    //for character
    int breakpoint=(2*i+1)/2;
    for(char ch='A';ch<'A'+2*i+1;ch++){
        cout<<ch;
    }
    //for space
    for(char ch='A'+i;ch<'A'+n-i;ch--){
        cout<<" ";
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
