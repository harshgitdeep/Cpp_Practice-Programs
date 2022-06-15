#include<iostream>
using namespace std;

class Room{
    public:
    double length;
    double breadth;
    double height;

    double calArea(){
        double a=length * breadth;
        return a;
    }

    double calVolume(){
        double vol=length*height*breadth;
        return vol;
    }
};

int main(){
    
    Room room1;
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    Room room2;
    room2.length = 32.5;
    room2.breadth = 39.1;
    room2.height = 17.5;

    cout << "Area of Room1 =  " << room1.calArea() << endl;
    cout << "Volume of Room1 =  " << room1.calVolume() << endl;

    cout<<""<<endl;
    
    cout << "Area of Room2 =  " << room2.calArea() << endl;
    cout << "Volume of Room2 =  " << room2.calVolume() << endl;
    return 0;
}