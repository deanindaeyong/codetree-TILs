#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    while(1){
        cin>>n;
        if(n==25){
            cout<<"Good";
            break;
        }
        else if(n>25)
        cout<<"Lower"<<endl;
        else if(n<25)
        cout<<"Higher"<<endl;
    }
    return 0;
}