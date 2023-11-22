#include <iostream>

using namespace std;
class Wall{
   public:
       double length;
       double height;

  /* public:
    Wall(double len, double hgt){
       length = len;
       height = hgt;

    }*/
    double calculateArea(){
        double area;
     cout<<"Enter height:";
        cin>>height;
        cout<<"Enter length:";
        cin>>length;
    area= length * height;
      cout<<"Area of wall 1: "<<area<<endl;
      return 0;
    }
     double calculateArea1(){
        double area;
     cout<<"Enter height:";
        cin>>height;
        cout<<"Enter length:";
        cin>>length;
    area= length * height;
      cout<<"Area of wall 2: "<<area<<endl;
      return 0;
    }
};
int main()
{
 Wall wall1;
 Wall wall2;
 wall1.calculateArea();
wall2.calculateArea1();

    return 0;
}
