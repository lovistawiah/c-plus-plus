#include <iostream>

using namespace std;

 class gov{
     public:
    int age,schoolOrTrade;
    string name;
    int boolean,ageOfStopSchooling;
    double govMoneyForSchool =100;
    int govLimitedAge =30;
    int proccessedAge;
    double totalAmount;
    int trueOrFalse,stopAge;
    double appFee =2000;
    int yearcalc =12;
    double installment = 70;
    int yearOfCompleteApprenticeship = 12;
    int startAge =18;

double person(){
     cout<<"HELLO! this is a government aid agency"<<endl;
    cout<<"\n";
    cout<<"Enter your full name:";
    cin>>name;
    cout<<"\n";
    cout<<"Enter your age:";
    cin>>age;
    if (age >18){
         cout<<"What do you want to use your life for?"<<endl;
    cout<<"1. Schooling"<<endl;
    cout<<"2.Trading"<<endl;
    cin>>schoolOrTrade;

    if(schoolOrTrade == 1 /*schooling*/){
     cout<<"Have you completed university?"<<endl;
      cout<<"1.Yes"<<endl;
      cout<<"2.No"<<endl;
 cin>>boolean;

    if( boolean == 1/*Yes*/){
             proccessedAge = govLimitedAge-yearcalc;
        totalAmount = proccessedAge * govMoneyForSchool;
        cout<<"Your Cash-out is "<<totalAmount<<endl;
         cout<<"Thank you!"<<endl;
 }else if(boolean == 2/*No*/){
      cout<<"At what age did you stop schooling?"<<endl;
    cin>>ageOfStopSchooling;
    if(ageOfStopSchooling >govLimitedAge){
        cout<<"Unqualified Person!"<<endl;
    } else if(ageOfStopSchooling <govLimitedAge){
         proccessedAge = ageOfStopSchooling -startAge;
   totalAmount = proccessedAge * govMoneyForSchool;
    cout<<"Your Cash-out is "<<totalAmount<<endl;
    cout<<"Thank You!";
    }
     }
    }else if( schoolOrTrade == 2 /*trading*/){
 cout<<"Have you completed your apprenticeship?"<<endl;
       cout<<"1.Yes"<<endl;
         cout<<"2.No"<<endl;
 cin>>trueOrFalse;
 if(trueOrFalse ==1){
        cout<<"Well Done!"<<endl;
     totalAmount = appFee +(yearcalc * yearOfCompleteApprenticeship);
      cout<<"Your Cash-out is "<<totalAmount<<endl;
 }else if(trueOrFalse ==2){
 cout<<"At what age did you stop the apprenticeship?"<<endl;
 cin>>stopAge;
 proccessedAge = stopAge -startAge;
 if(proccessedAge <startAge){
         totalAmount = proccessedAge;
     cout<<"Your Cash-out is "<<totalAmount<<endl;

 }else if(proccessedAge > startAge){
      cout<<"You are telling lies!"<<endl;

 }
 }
    }else{
    cout<<"Your choice is incorrect!"<<endl;
    }

    }else if(age <18){
        cout<<"Gerrout! you are not qualified";
    }
       return totalAmount;
    }

};






int main()
{
 gov gov1;
 gov1.person();
    return 0;
}
