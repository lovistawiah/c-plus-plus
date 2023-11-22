#include <iostream>

using namespace std;
class abcCompany{
    public:
        //you can make it private if you want to make it complex!!!
    int yearsOfExp;
    double semiSkilledStaffSalary = 800;
    //assigning five to assume the number of semi or skilled staff in the company
    int numberOfSemiSkilledStaff =10;
    int numberOfSkilledStaff =10;
    //declared employee to make the looping easy
    int employee;
    double SkilledStaffSalary = 1000;


    double yearsOfExperience(){
        cout<<"enter your years of experience in ABC Company:";
        cin>>yearsOfExp;

        if(yearsOfExp >=5){
           //the condition determines the years of exp of the staff before execution takes place
             for (employee=0;employee<5;employee++){
                    //employee +1 does the looping of the employees from 1 to 5
            cout<<" employee "<< employee +1<<" salary ="<<SkilledStaffSalary * yearsOfExp<<endl;
        }
        //the total displays the 5 employees multiplying the fixed salary that is the 800.
        double total = numberOfSkilledStaff*SkilledStaffSalary * yearsOfExp;
        cout<<"\nTotal salary of Skilled Staff is:"<< total<<endl;
        }
        else if(yearsOfExp <5){
            for (employee=0;employee<5;employee++){
            cout<<" employee "<< employee +1<<" salary = "<<semiSkilledStaffSalary <<endl;
        }
        //the total displays the 5 employees multiplying the fixed salary that is the 800.
         double total = numberOfSkilledStaff*semiSkilledStaffSalary;
        cout<<"total salary of Skilled Staff is:"<< total<<endl;
        }else{//Just kidding
            cout<<"Fuck off!! You are not employeed here."<<endl;
        }
    }




};
int main()
{
abcCompany employees;
employees.yearsOfExperience();

    return 0;
}
