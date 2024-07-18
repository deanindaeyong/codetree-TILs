#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    for(int i=0;i<2*n;i++){
        if(i%2==0){
            for(int x=0;x<1+(i/2);x++){
                cout<<"* ";
            }
        }else {for(int y=0;y<=n-i/2-1;y++){
            cout<<"* ";
        }}
        cout<<endl;
    }
    
    return 0;
}