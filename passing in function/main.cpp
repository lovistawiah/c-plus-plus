#include <iostream>

using namespace std;
int marks;
void display(int m[5]){
cout<<"display marks:"<<endl;

 for(int i=0;i<5;++i){

 cout<<"student" << i+1 << " mark: " <<m[i]<<endl;
}
}

int main()
{
   int marks[5]={};
    cout<<"enter the marks:";
    cin>>marks;
   display(marks);
    return 0;
}

