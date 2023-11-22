#include <iostream>

using namespace std;
enum class Season{
    spring,
    winter,
    autumn,
    summer
};
int fun(Season c){
    switch(c)
    {
case Season::autumn : cout<<"autumn"<<endl;
            break;
case Season::spring : cout<<"spring"<<endl;
            break;
case Season::winter : cout<<"winter"<<endl;
            break;
case Season::summer : cout<<"summer";
            break;
    }
}


int main()
{
   fun(Season::autumn);
   fun(Season::spring );
  fun(Season::winter);
   fun(Season::summer);
    return 0;
}
