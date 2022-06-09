#include<iostream>
using namespace std;
int local=3;
void sum(){
    int a;
}
int main(){
    int local=1;
    local=23;
    cout<<"local = "<<::local<<endl; //scope resolution operator
    cout<<"global = "<<local<<endl;
    return 0;
}