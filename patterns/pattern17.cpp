#include<iostream>
using namespace std;
void pattern(int n){
    char alphabet='A';
    for(char ch='A';ch<='A'+n;ch++){
        for(int j='A';j<=ch;j++){
            cout<<ch<<" ";
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