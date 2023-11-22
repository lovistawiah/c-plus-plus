#include <iostream>

using namespace std;
class School{
  public:
      string course;
      string course2;
      int numberOfCourse;
      void studies(){

    cout<<"How many courses do you offer? ";
    cin>>numberOfCourse;
    if(numberOfCourse==1){
        cout<<"Enter your course";
        cin>>course;
        cout<<"You study only one course\n";
        cout<<"You study:"<<course<<endl;
    }else if(numberOfCourse==2){
        cout<<"enter your first course:";
        cin>>course;
        cout<<"enter your second course:";
        cin>>course2;
        cout<<"You study only two courses\n";
        cout<<"You study:"<<course<<"and"<<course2<<endl;
    }else{
        cout<<"number is more than courses!";
    }
      }

};
int main()
{
    School student;
    student.studies();



    return 0;
}
