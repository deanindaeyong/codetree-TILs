#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            for(int x=0;x<n-i;x++){
                cout<<"*";}
            cout<<" ";}
        cout<<endl;}
    return 0;
}