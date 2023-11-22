#include <iostream>

using namespace std;


int main()
{
   double num1,num2;
    char op;
    double result;


    cout << "Enter your first number: ";
    cin>>num1;
    cout << "Enter an operator: ";
    cin>>op;
    cout << "Enter your second number: ";
    cin>>num2;


    if(op == '+'){
   cout<< num1 + num2;

    }

    else if(op == '-'){
      cout<< num1 - num2;


    }
    else if(op == '*'){
   cout<<num1 * num2;


    }
    else if(op == '/'){
   cout<<num1 / num2";

    }
    else{
        cout<<"Invalid operator!" ;
    }


    return 0;
}
