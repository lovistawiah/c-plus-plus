#include <iostream>

using namespace std;

int main()
{
   int numbers[5];

   cout<<"enter 5 numbers: ";

   for(int i = 0; i<5; ++i){
    cin>>numbers[i];
   }

   cout<<"The numbers are: ";
   for(int n =0; n<5; ++n){
    cout<<numbers[n] <<" ";
   }
    return 0;
}
