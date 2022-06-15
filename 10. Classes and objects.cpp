#include<iostream>
using namespace std;


class car{
    public:
    string brand; 
    string Name;
    int modelno;

};

int main(){
    
    car car1;
    car1.brand="Volvo";
    car1.modelno=123;

    car car2;
    car2.brand="BMW";
    car2.modelno=640;
    
    cout<<"Car1"<<endl;
    cout<<"Brand of the car    : "<<car1.brand<<endl;
    cout<<"Model no            : "<<car1.modelno<<endl;
    cout<<" "<<endl;
    cout<<"Car2"<<endl;
    cout<<"Brand of the car    : "<<car2.brand<<endl;
    cout<<"Model no            : "<<car2.modelno<<endl;
    return 0;
}