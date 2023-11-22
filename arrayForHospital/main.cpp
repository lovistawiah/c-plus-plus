#include <iostream>

using namespace std;

int main()
{
  string patient[4]{"Jojo","Kofi","John","Rita"};
  string doctor[2]{"Frank","Edmond"};
//string room[]{"Alex Room","Johnson Room"};
 // cout<<patient[1];

//cout<<"patient name:"<<patient[i]<<"doctor: "<<doctor[a]<<"room: "<<room[c];



  for(int i = 0; i < 2; i++){
 for(int a = 0; a < 4; a++){
cout <<"patient:"<< patient[a] <<"  doctor:"<< doctor[i] << "\n";
 }
  }





    return 0;
}
