#include<bits/stdc++.h>
using namespace std;

//Pass by value:-
void operation(int num){
  for(num;num<=100;num+=5) {
    cout<<num<<endl;
  } 
}
int main(){
   int num=10;
    operation(num);
    cout<<num<<endl;
    
return 0;
}
