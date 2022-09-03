#include <iostream>
using namespace std;
int main() {
    string str,stra="";
    cin>>str;
    int l=str.size();
    for(int i=l-1;i>=0;i--){
        stra+=str[i];
        
    }
    
    cout<<stra;
    
    
    
    

    return 0;
}
