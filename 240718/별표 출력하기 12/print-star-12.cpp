#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if((j%2==0 && i!=0) ||  i>j)
            cout<<"  ";
            else 
            cout<<"* ";

            
        }
        cout<<endl;
    }
    return 0;
}


 /*  0 1 2 3 4 5
  0* * * * * *
  1. *.  *.  *
  2.     *.  *
  3.     *.  *
  4.         *
  5.         *
  */