#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x1,x2,y1,y2,a1,b1,a2,b2;
    cin>>x1>>y1>>x2>>y2;
    cin>>a1>>b1>>a2>>b2;
    
    if(x1>a2||x2<a1||y1>b2||y2<b1)cout<<"nonoverlapping";
    else cout<<"overlapping";
    return 0;
}