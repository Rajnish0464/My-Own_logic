#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int unique=0;
    int arr[7]={1,2,3,5,3,2,1};
    for(int i=0;i<7;i++){
        unique=unique^arr[i];
    }
    cout<<unique;




    return 0;
}
