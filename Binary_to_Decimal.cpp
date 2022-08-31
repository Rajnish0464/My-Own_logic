#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n,c,num_store=0,count=0;

    cout<<"enter the number:";
    cin>>n;
    while(n/2>=0)
        {
        if(n==0) break;
        int d=n%2;
        num_store+=d*pow(10,count);
        count++;

        int a=n/2;



        n=a;
        }
    cout<<endl<<num_store;




     return 0;
}
