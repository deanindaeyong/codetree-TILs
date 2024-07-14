#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,x,y;

    cin>>a>>b;
    
    x=a;
    if(a>b)
    cout<<"1.";
    else cout<<"0.";
    for(int i=0;i<20;i++){
        y=(x*10)/b;
        cout<<y;
        x=((x*10)%b);
    }
    
    return 0;
}