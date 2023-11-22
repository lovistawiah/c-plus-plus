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

      cout<<"Enter room length:";
  cin>>room1.length;

  cout<<"Enter room breadth:";
  cin>>room1.breadth;

  cout<<"Enter room height:";
  cin>>room1.height;

  cout<<"Area of a room: "<<room1.calculateArea()<<endl;
  cout<<"Volume of a room: "<<room1.calculateVolume()<<endl;

    return 0;
}
