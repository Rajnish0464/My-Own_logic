#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
        
    }
    return -1;
}


int main(){
  int even[6]={12,14,16,18,20,22};
  int odd[5]={2,5,7,9,11};
  int evenindex=binarySearch(even,6,30);
  cout<<"index at : "<<evenindex<<endl;
  int oddindex=binarySearch(odd,5,11);
  cout<<"index at : "<<oddindex<<endl;
   


    return 0;
}
