//Sum of the elements of array 
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6};
    int sum=0,evensum=0,oddsum=0,i,n=5;
    
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    if(i%2==0){
         evensum+=arr[i];
            }
    }
     
cout<<"Total sum = "<<sum<<endl;
cout<<"Odd sum = "<<sum - evensum<<endl;
cout<<"Even sum = "<<evensum<<endl;

    return 0;
}