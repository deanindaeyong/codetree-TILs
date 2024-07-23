#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string x,y;
    cin>>x>>y;
    int xl,yl;
    xl=x.length();yl=y.length();
    if(xl>yl){cout<<x<<" "<<xl;}
    else if(yl>xl){cout<<y<<" "<<yl;}
    else cout<<"Same";
    return 0;
}