#include <iostream>
using namespace std;
int n;
int cnt=0;
int fuc(int x){
    if(x<=1)
        return cnt;
    if(x%2==0){
        ++cnt;
        return fuc(x/2);
    }else{++cnt; return fuc(x*3+1);}


}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cout<<fuc(n);

    return 0;
}