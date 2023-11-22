#include <iostream>

using namespace std;
enum Season{spring,summer,winter,autumn};
int fun(int c){
    switch(c){
        case spring : cout<<"spring"<<endl; break;
        case summer : cout<<"summer"<<endl; break;
        case winter : cout<<"winter"<<endl; break;
        case autumn : cout<<"autumn"<<endl; break;
    }

}
int main()
{
   fun(0);
   fun(1);
   fun(2);
   fun(3);
    return 0;
}
