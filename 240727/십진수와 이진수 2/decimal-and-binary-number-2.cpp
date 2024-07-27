#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string n;
    cin>>n;
    int arr[10000];
    int num=0;
    for(int i=0;i<n.length();i++){
        num=num*2+n[i]-'0';
    }
    num*=17;
    int cnt=0;
    while(true){
        if(num<2){
            arr[cnt++]=num;
            break;
        }
        arr[cnt++]=num%2;
        num/=2;
    }
    for(int i=cnt-1;i>=0;i--){
        cout<<arr[i];
    }

    return 0;
}