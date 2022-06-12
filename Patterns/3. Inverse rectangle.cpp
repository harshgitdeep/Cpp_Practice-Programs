#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(it j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}