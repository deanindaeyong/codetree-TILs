#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b,ta,tb;
    int sum;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        if(isdigit(a[i])!=0){
            ta+=a[i];
        }
        else break;
    }
    for(int i=0;i<b.length();i++){
        if(isdigit(b[i])!=0){
            tb+=b[i];
        }
        else break;
    }
    sum=stoi(ta)+stoi(b);
    cout<<sum;
    return 0;
}