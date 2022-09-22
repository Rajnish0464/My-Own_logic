#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Size Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int maxNo=INT_MIN;
   int minNo=INT_MAX;
   for(int i=0;i<5;i++){
       if(arr[i]>maxNo){
           maxNo=arr[i];
       }
       if(arr[i]<minNo){
           minNo=arr[i];
       }
       
   }
   cout<<"Max_no is : "<<maxNo<<endl<<"MIN_NO is : "<<minNo;
    return 0;
}
