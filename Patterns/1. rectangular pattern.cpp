// rectangular pattern
#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"Enter the number of rows = ";
    cin>>row;
    cout<<"Enter the number of columns = ";
    cin>>col;
cout<<"-----------------------------"<<endl;
cout<<"Here is the pattern :"<<endl;

for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        cout<<"* ";
    }
cout<<endl;
}
    return 0;
}