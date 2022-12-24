#include <iostream>
using namespace std;

int main() {
    int row,col;
    for(int row=0;row<7;row++)
    {

    for(int col=0;col<5;col++)
    {
    if((col==0 )|| (row==0 || row==6))
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
