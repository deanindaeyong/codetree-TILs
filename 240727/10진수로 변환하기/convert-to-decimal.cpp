#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string x;
    
    int cnt=0,num=0;
    
    cin>>x;
    int len=x.length();
    int arr[len];
    int y=stoi(x);
    for(int i=len-1;i>=0;i--){
        arr[i]=y%10;
        y/=10;
    }
    for(int i=0;i<len;i++){
        num=num*2+arr[i];
    }
    cout<<num;
    return 0;
}