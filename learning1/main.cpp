#include <iostream>

using namespace std;

class Employee{
public:
    string Name;
    string Company;
    int Age;
    void introduceYourSelf(){
    for(int i = 0; i<4; ++i){
        cout<<"Enter name:";
        cin>>Name;
        cout<<"Enter company:";
        cin>>Company;
        cout<<"Enter age:";
        cin>>Age;
        cout<<"I am "<< Name <<". I work for "<< Company <<". I am "<<Age<<" years old."<<endl;
    //cout<<Name<<endl;
    //cout<<Company<<endl;
    //cout<<Age;
    }
    }
   // public:
   /*Employee(string name, string company, int age){
     Name = name;
     Company = company;
      Age = age;
}*/
};
int main()
{
    Employee employee1;
    employee1.introduceYourSelf();

//employee1.Name = "Lovis";
//employee1.Company = "Lat company";
//employee1.Age = 45;
//Employee employee1 = Employee("Lovis", "Lat", 56);
//employee1.introduceYourSelf();


//cout<<employee1.Name<<endl;
//cout<<employee1.Company<<endl;
//cout<<employee1.Age;

    return 0;
}
