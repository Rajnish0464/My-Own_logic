#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int num1,num2;
    cout<<"enter num1 = ";
        cin>>num1;
        cout<<"enter num2 = ";
        cin>>num2;
        num1=num1+num2;
        num2=num1-num2;
        num1=num1-num2;
        cout<<" after swapin num1 = "<<num1<<endl;
        cout<<" after swapin num2 = "<<num2;
    
    
   
    return 0;
}
