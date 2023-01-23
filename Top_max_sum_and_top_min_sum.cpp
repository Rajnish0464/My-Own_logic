// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;

int main() {
    int n;
    cout<<"enter the value of n   : ";
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minNo=INT_MAX;
    int maxNo=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxNo){
            maxNo=arr[i];
        }
        if(arr[i]<minNo){
            minNo=arr[i];
        }
        
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum-maxNo<<endl;
    cout<<sum-minNo<<endl;
    

    return 0;
}
