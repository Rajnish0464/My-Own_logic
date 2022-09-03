#include <iostream>
using namespace std;
int main() {
    string str,stra="";
    cin>>str;
    int l= str.size();
    for(int i=l-1;i>=0;i--){
       stra+=str[i];
    }
    if(str==stra){
    cout<<"pelindrom";}
    else{cout<<"not pelindrom";}
    return 0;
}
