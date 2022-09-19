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
    
    for(int i=0;i<n;i++){
        bool swaped=false;
      
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
          swap(arr[j],arr[j+1]);
          swaped=true;
            }
            
        }
        //without below two lines code is executed;
        //but use for less time complexity;
        if(swaped==false)
        break;
            
            
            
    }
      cout<<"After Bubble sort the elements are :  "<<endl;
      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      } 
      
      
      
  


    return 0;
}
