#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            
            end=mid-1;
        }
        mid=(start+end)/2;
        
    }
    return ans;
}
int lastOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            
            end=mid-1;
        }
        mid=(start+end)/2;
        
    }
    return ans;
}


int main(){
  int even[6]={2,3,3,3,3,5};
  int odd[6]={2,3,3,3,3,5};
  cout<<"last occurence at index :"<<binarySearch(even,6,3)<<endl;
  cout<<"last occurence at index :"<<lastOcc(odd,6,3)<<endl;
 
  //int oddindex=binarySearch(odd,5,11);
 // cout<<"index at : "<<oddindex<<endl;
   


    return 0;
}
