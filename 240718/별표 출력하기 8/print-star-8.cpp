#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<"*";
        }
        else for(int j=0;j<=i;j++){
            cout<<"* ";
        }

        cout<<endl;

    }
    return 0;
}