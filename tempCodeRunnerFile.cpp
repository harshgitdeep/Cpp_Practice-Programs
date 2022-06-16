#include<iostream>
using namespace std;

int main(){
    
    int arr[5]={21,33,1,66,3};
    int x=0;
    for(int i=0;i<=5;i++){
        if(arr[i]>x){
            x=arr[i];
        }
        cout<<x<<" ";
    }
    return 0;
}