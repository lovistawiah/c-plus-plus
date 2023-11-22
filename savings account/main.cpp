#include <iostream>

using namespace std;
class SavingsAccount{
public:
    double amount;
    double deposit;
    double withdrawal;
    double balance = 4000;
    int withdrawalOrdeposit;
   double CurrentBalance;

 int withdrawalOrDeposit(){
     cout<<"Hello Customer!"<<endl;
     cout<<"Do you want to withdraw or make a deposit into your account?"<<endl;
     cout<<"Choose 1 to withdraw money or choose 2 to make deposit:";
     cin>>withdrawalOrdeposit;
      }
    double Deposit(){
        if(withdrawalOrdeposit == 1){
    cout<<"enter amount to be deposited: ";
    cin>>deposit;
     deposit = amount;
     if(deposit < 0){
      cout<<"error"<<endl;
      }
     CurrentBalance = balance+amount;
       return CurrentBalance;
    cout<<"Current Balance:"<<CurrentBalance<<endl;
     }
    }

    double Withdrawal(){
         if(withdrawalOrdeposit == 2){
        cout<<"Enter amount to withdraw:";
        cin>>withdrawal;
         withdrawal = amount;
        CurrentBalance = withdrawal-balance;
        if(balance < withdrawal){
        cout<<"Insufficient balance!!"<<endl;
          } else{
         cout<<"error input!!"<<endl;
        }
        return CurrentBalance;
    cout<<"Current Balance:"<<CurrentBalance<<endl;

     }
    }

};
int main()
{
 SavingsAccount acc;
 acc.withdrawalOrDeposit();
 acc.Deposit();
 acc.Withdrawal();
    return 0;
}
