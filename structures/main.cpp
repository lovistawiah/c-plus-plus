#include <iostream>

using namespace std;
struct Person
{
char name[50];
int age;
float salary;
};
void displayData(Person);

int main()
{
  Person p;
  cout<<"Enter full name: ";
  cin.get(p.name, 50);

    cout<<"enter age: ";
  cin>>p.age;

  cout<<"enter salary: ";
  cin>>p.salary;

  displayData(p);
    return 0;
}
void displayData(Person p){
        cout<<"\nDisplay information. "<<endl;
        cout<<"Name: "<<p.name<<endl;
        cout<<"Age: "<<p.age<<endl;
        cout<<"Salary: "<<p.salary;
}
