 #include<iostream>
 using namespace std;
 void pattern(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<n*2-2*i-1;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<i;j++){
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