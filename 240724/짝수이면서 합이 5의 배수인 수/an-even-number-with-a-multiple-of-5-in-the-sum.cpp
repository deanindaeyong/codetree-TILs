#include <iostream>
using namespace std;
string fun(int n){
    
    if(n%2==0){
        if((n%10+n/10)%5==0){
            return "Yes";
        }
    }else return "No";

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<fun(n);
    return 0;
}