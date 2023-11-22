#include <iostream>

using namespace std;
class Employee{
private:
    string Name;
    string Company;
    int Age;
public:

  void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
   void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void introduceYourSelf(){
    cout<<Name<<endl;
    cout<<Company<<endl;
    cout<<Age;
    }
   /* public:
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }*/
};
int main()
{
//employee1.Name = "Lovis";
//employee1.Company = "Lat company";
//employee1.Age = 45;
//Employee employee1 = Employee("Lovis", "Lat", 56);
//employee1.introduceYourSelf();
Employee employee1;
employee1.setAge(56);
cout<<"I am "<<employee1.getAge()<<endl;

//cout<<employee1.Name<<endl;
//cout<<employee1.Company<<endl;
//cout<<employee1.Age;
    return 0;
}
