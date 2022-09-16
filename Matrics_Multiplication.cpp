#include <iostream>
using namespace std;

int main() {
    int m1,m2,m3;
    cin>>m1>>m2>>m3;
    int n1[m1][m2];
    int n2[m2][m3];
    for(int i=0;i<m1;i++){
        for(int j=0;j<m2;j++)
        cin>>n1[i][j];
    }
for(int i=0;i<m2;i++){
        for(int j=0;j<m3;j++)
        cin>>n2[i][j];
    }
    int ans[m1][m3];
    for(int i=0;i<m1;i++){
        for(int j=0;j<m3;j++){
            ans[i][j]=0;
        }
    
    }
    for(int i=0;i<m1;i++){
        for(int j=0;j<m3;j++){
            for(int k=0;k<m2;k++)
            ans[i][j]+=n1[i][k]*n2[k][j];
        }
    

}
for(int i=0;i<m1;i++){
        for(int j=0;j<m3;j++){
            cout<<ans[i][j]<<" ";
            
        }
        cout<<endl;
    
}

    return 0;
}
