#include <iostream>
using namespace std;

int main() {
    cout<<"enter your number";
    int n;
    int store=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            store+=i;
        }
    }
    //cout<<store <<" "<< "is ";
    if(store==n){
            cout<<"perfect number :";
        }
        else{
            cout<<"number is not perfect";
        }
    
   
    return 0;
}
