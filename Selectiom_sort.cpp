#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<5-1;i++){
      int minIndex=i;
      
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[minIndex])
          
                minIndex=j;
        }
            
            swap(arr[minIndex],arr[i]);
            
      }
      cout<<"After sorting the elements are :  "<<endl;
      for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
      } 
      
      
      
  


    return 0;
}
