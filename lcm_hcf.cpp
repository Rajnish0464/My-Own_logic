#include <iostream>
using namespace std;

int main() {
    int ans,num;
    cin>>ans>>num;
    int lcm=ans*num;

    while(num%ans!=0){
        int a =num%ans;
        num=ans;
        ans=a;
    }
    cout<<"HCF:"<<ans<<endl;
    lcm=lcm/ans;
    cout<<"LCM:"<<lcm;


    return 0;
}
