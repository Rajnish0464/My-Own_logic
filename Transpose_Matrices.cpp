#include <iostream>
using namespace std;

int main() {
    int arr[3][3]={{1,2,3},{2,3,4},{4,5,6}};
    cout<<"Matrices Before transpose"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            cout<<arr[i][j]<<" ";
            
        } 
        cout<<endl;
        
      }
      cout<<"Matrices After transpose"<<endl;
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) {
            cout<<arr[i][j]<<" ";
            
        } 
        cout<<endl;
        
      }

    return 0;
}
