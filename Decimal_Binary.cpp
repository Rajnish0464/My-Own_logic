#include<iostream>
#include<cmath>
using namespace std;
int AnyToDec(int n,int b){
    int i=0,reminder=0,rev=0;
//write your code here.
while(n!=0){
        reminder=n%10;
        rev+=reminder*pow(b,i);
        i++;
        n=n/10;
         
 }
 return rev;
}
int main(){
    int n;
    int b;
    int rev=0;
    cin >> n;
    cin >> b;
     int res= AnyToDec(n,b);
      cout<<res<<endl;
    
      return 0;
    }
    

