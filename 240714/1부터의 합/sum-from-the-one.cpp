#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int x;
    int sum=0;
    for(int i=1;i<=100;i++){
        sum+=i;
        if(sum>=n){
            x=i;
            break;
        }
        
    
        
    }
    cout<<x;
    return 0;
}