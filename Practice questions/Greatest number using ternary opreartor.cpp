//Find the greatest number out of three using ternary operator 
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a b c = ";
    cin>>a>>b>>c;

  int z =(a>b)? ((a>c)?a:c) : ((b>c)?b:c) ;
  cout<<z;

    return 0;
}