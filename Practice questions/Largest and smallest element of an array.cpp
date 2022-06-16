//To find largest and the smallest element of an array
#include<iostream>
using namespace std;

int main(){
 int arr[6]={82,34,95,76,1000,-21};
 int x=arr[0];
 int y=arr[0];
 for(int i=0;i<6;i++){
    if(arr[i]<x){
        x=arr[i];}

    if (arr[i]>y){
        y=arr[i];
    }
    };
    cout<<"Smallest element of an array: "<<x<<endl;
    cout<<"Largest element of an array : "<<y;


    return 0;
}