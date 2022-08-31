#include <iostream>
using namespace std;

bool isPrime(int n)
{   if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main() {
    int n,c,count=0,count_prime=0;
    cout<<"enter your number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       
        if(n%i==0){
          cout<<i<<" ";
          
          count++;
          if (isPrime(i)==1) count_prime+=1;
          //else cout<<"Not Prime"<<endl;
          
          
          }
    }
    cout<<endl<<"Total Factor:"<<count;
    cout<<endl<<"Total Prime Factor:"<<count_prime;
    return 0;   
}
