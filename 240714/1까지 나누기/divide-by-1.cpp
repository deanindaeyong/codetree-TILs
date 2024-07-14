#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int x=n;
    for(int i=1;i<=n;i++){
       
        if(x/i==0){
            cout<<i;
            break;
        }
        x=x/i;
    
        
    }
    return 0;
}