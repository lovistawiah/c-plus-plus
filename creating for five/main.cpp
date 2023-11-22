#include <iostream>

using namespace std;
struct student{
int roll_no;
//string name;
int form;
int telephone;
};


int main()
{
    int i;
    struct student stud[5];

    for(i=0;i<3;++i){
        cout<<"Fill the information below:"<<endl;
        cout<<"Enter your roll number:";
        cin>>stud[i].roll_no;
       // cout<<"Enter your name:";
         //cin>>stud[i].name;
        cout<<"Enter your form number:";
        cin>>stud[i].form;
        cout<<"Enter your telephone number:";
        cin>>stud[i].telephone;
    }

    for(i=0;i<3;++i){
        cout<<"\nStudent"<<i+1<<" information:"<<endl;
        cout<<"Roll no:"<<stud[i].roll_no<<endl;
        //cout<<"Name: "<<stud[i].name<<endl;
        cout<<"Form no:"<<stud[i].form<<endl;
        cout<<"Telephone no:"<<stud[i].telephone<<endl;
    }


    return 0;
}
