#include <iostream>

using namespace std;

void display(int m[5]){
cout<<"display marks:"<<endl;

 for(int i=0;i<5;++i){
 cout<<"student" << i+1 << " mark: " <<m[i]<<endl;
}
}

int main()
{
   int marks[5]={34,67,98,34,87};
   display(marks);
    return 0;
}
