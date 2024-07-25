#include <iostream>
#include <cmath>
using namespace std;
int n;
int sq(int a){
    if(a<10)
        return pow(a,2);
    return sq(a/10)+pow(a%10,2);
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cout<<sq(n);
    return 0;
}