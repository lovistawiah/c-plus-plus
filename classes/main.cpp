#include <iostream>

using namespace std;
class Room{
 public:
     double length;
     double breadth;
     double height;

     double calculateArea(){

         return length * breadth;
     }
     double calculateVolume(){
        return length * breadth * height;
     }
};



int main()
{
  Room room1;

  room1.length =78;
  room1.breadth=90;
  room1.height=78;

  cout<<"Area of room = "<<room1.calculateArea()<<endl;
    cout<<"Area of volume = "<<room1.calculateVolume()<<endl;
    return 0;
}
