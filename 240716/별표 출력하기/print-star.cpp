#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin>>n;
    int cnt=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
            
        }
      cout<<endl;
    }
    for(int i=cnt-1;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"* ";
            
        }
      cout<<endl;
    }
    return 0;
}