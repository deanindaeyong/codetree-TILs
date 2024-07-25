#include <iostream>
using namespace std;
int a,b,c;
int ad(int x){
    if(x==0){
        return 0;
    }
    return ad(x/10)+x%10;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>a>>b>>c;
    cout<<ad(a*b*c);
    return 0;
}