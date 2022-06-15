#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter n = ";
    cin>>n;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Non prime";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}