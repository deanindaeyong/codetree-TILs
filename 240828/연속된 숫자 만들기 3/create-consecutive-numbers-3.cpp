#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    while(a+1!=b||b+1!=c){
        if(abs(b-a)>abs(c-b)){
            c=b-1;
            swap(b,c);
        }else{
            a=c-1;
            swap(b,a);
        }
        cnt++;
    }
    cout<<cnt;
    return 0;
}