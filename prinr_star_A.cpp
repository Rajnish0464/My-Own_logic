#include <iostream>
using namespace std;

int main() {
    int row,col;
    for(int row=0;row<7;row++)
    {

    for(int col=0;col<5;col++)
    {
    if((col==0 || col==4) && row!=0) || ((row==0 || row==3) && (col>0 && col<4))
    {

            cout<<"*";
    }
        else{
            cout<<" ";
        }
        }
        cout<<endl;
    }

    return 0;
}
