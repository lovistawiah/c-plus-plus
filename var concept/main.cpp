#include <iostream>

using namespace std;

float absolute (float var){
   if(var<0.0)
    cout<<"enter the number: ";
       cin>>var;
      var = -var;
   return var;
}

int absolute(int var){
  if(var < 0)
    var =-var;
    cout<<"enter the number: ";
    cin>>var;
  return var;
}

int main()
{

    float a;
    int b;
   a = absolute(a);
  b = absolute(b);

   cout<<absolute(a)<<endl;
   cout<<absolute(b)<<endl;
    return 0;

}
