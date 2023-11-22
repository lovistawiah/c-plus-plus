#include <iostream>

using namespace std;

namespace myEnum{
    enum Type{
        a=100,
        b=200,
        c=-1
    };
    static const Type All[] ={a,b,c};
    void fun(const myEnum::Type e){
        cout<<"e"<<endl;
    }
}
int main()
{
    fun();
  for(const auto e: myEnum::All)
    fun(e);
  for_each(begin(myEnum::All), end(myEnum::All),fun );
    return 0;
}
