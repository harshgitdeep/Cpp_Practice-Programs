#include<iostream>
using namespace std;

int add(int num1,int num2){
        int s=num1+num2;
        return s;}

int main(){
    int a,b;
    cout<<"enter:";
    cin>>b>>a;
    cout<<add(a,b);
    return 0;
}