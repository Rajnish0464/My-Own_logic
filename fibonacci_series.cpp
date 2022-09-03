#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    int start=0;
    int end=1;
    cout<<start<<" "<<end<<" ";
    for(int i=0;i<n-2;i++){
        sum=start+end;
        start=end;
        end=sum;
         cout<<start<<" ";
    
    }
   

    return 0;
}
