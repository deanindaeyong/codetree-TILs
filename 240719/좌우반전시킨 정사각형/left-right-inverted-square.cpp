#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j=n;j>0;j--){
            cout<<j*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}