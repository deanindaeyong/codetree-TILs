#include <iostream>
using namespace std;
int n;
void flower(int a){
    if(a==0){
        return;
    }
    cout<<a<<" ";
    flower(a-1);
    cout<<a<<" ";

}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    flower(n);
    return 0;
}