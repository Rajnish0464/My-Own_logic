#include<iostream>
#include<string>
using namespace std;
class myclass{
public:
    string name;  
    int student_id;
    int student_mobno;
    string address;
    int std;
    
};
int main(){
    myclass myobj1;
    myobj1.name="Ramesh";
    myobj1.student_id=191110000;
    myobj1.student_mobno=9900110011;
    myobj1.address="patna";
     myclass myobj2;
    myobj2.name="Rakesh";
    myobj2.student_id=191110001;
    myobj2.student_mobno=9900110010;
    myobj2.address="patna Near gola road";
    cout<<"Name is : "<<myobj1.name<<endl;
    cout<<"Student Id :"<<myobj1.student_id<<endl;
    cout<<"Mobile NO is : "<<myobj1.student_mobno<<endl;
    cout<<"Address is : " <<myobj1.address<<endl;
    cout<<endl;
    cout<<"********************"<<endl;
     cout<<"Name is : "<<myobj2.name<<endl;
    cout<<"Student Id :"<<myobj2.student_id<<endl;
    cout<<"Mobile NO is : "<<myobj2.student_mobno<<endl;
    cout<<"Address is : " <<myobj2.address<<endl;
     
    
  return 0;  
}
