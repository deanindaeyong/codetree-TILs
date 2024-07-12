#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char pa,pb,pc;
    int a1,b1,c1;
    int a,b,c,d;
    a=b=c=d=0;

    cin>>pa>>a1>>pb>>b1>>pc>>c1;

    if((pa=='Y'&& a1>=37))
        if((pb=='Y'&&b1>=37)||(pc=='Y'&&c1>=37))
            cout<<'E';
        else cout<<'N';
    
    else if((pb=='Y'&&b1>=37)&&(pc=='Y'&&c1>=37))
    cout<<'E';
    else cout<<'N';

    return 0;
}