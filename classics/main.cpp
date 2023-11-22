#include <iostream>

using namespace std;
class Room {
 public:
     double breadth;
     double length;
     double height;
     double area;
     double volume;

     double calculateArea(){
        cout<<"enter length:";
        cin>>length;
         cout<<"enter breadth:";
         cin>>breadth;
         area = length * breadth;
         cout<<"the result is: "<<area<<"\n"<<endl;
     }
     double calculateVolume(){
         cout<<"enter length: ";
         cin>>length;
         cout<<"enter breadth: ";
         cin>>breadth;
         cout<<"enter height: ";
         cin>>height;
         volume = length * breadth *height;
        cout<<"the result is:"<<volume<<endl;

     }
};
int main()
{
    Room room1;

    double calculateArea();
   double calculateVolume();

  room1.calculateArea();
 room1.calculateVolume();
    return 0;
}
