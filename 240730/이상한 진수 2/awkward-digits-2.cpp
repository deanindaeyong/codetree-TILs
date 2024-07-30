#include <iostream>
using namespace std;
string a;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>a;

    for(int i=0;i<a.length();i++){
        if(a[i]=='0'){
            a[i]='1';
            break;
        }
        if(i==a.length()-1 && a[a.length()-1]!=0){
            a[a.length()-1]='0';
    
        }
    }
    cout<<a<<endl;
    int num=0;
    for(int i=0;i<a.length();i++){
        num=num*2+(a[i]-'0');
    }
    cout<<num;
    return 0;
}