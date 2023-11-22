#include <iostream>

using namespace std;

int main()
{
float arr[3];

float *ptr;
cout<<"Displaying Address Using Arrays: "<<endl;
for (int i =0;i<3;++i){

    cout<<"&arr["<<i<<"] = "<<&arr[i]<<endl;
}
ptr =arr;

cout<<"\nDisplaying Address Using Pointers: "<<endl;
for(int i=0;i<3; ++i){
    cout<<"&ptr +"<< i <<" = "<<ptr +i<<endl;
}
    return 0;
}
