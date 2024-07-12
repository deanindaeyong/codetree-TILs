#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;

    if(a>=b)
        if(a>=c)
            if(b>=c)
                cout<<b;
            else cout<<c;
        else cout<<a;
    else if(b>=c)
            if(c>=a)
            cout<<c;
            else cout<<a;
    else cout<<b;
            
    return 0;
}