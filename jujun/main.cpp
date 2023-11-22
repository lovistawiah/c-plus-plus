#include <iostream>

using namespace std;

int main()
{
int var = 5;
int *pointervar;

pointervar = &var;


cout<<"Var = "<<&var <<endl;
cout<<"Address of var (&var) ="<<&var <<endl;
cout<<"PointVar = "<<pointervar <<endl;


cout<<"Content of the Address Pointers to by Pointervar (*pointervar) ="<< var <<endl;
    return 0;
}
