#include <iostream>
using namespace std;

int main() {
    int n,ans=0;
    cout<<"enter the value of n : ";
    cin>>n;
    while(n!=0){
        int digit=n%10;
        ans=ans*10+digit;
        n/10;
        
    }
    cout<<ans;
    
    

    return 0;
}
