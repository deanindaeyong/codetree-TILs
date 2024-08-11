#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    int arr[101]={0,};
    for(int i=a;i<=b;i++){
        arr[i]++;
    }
    for(int i=c;i<=d;i++){
        arr[i]++;
    }
    int cnt=0;
    for(int i=0;i<=100;i++){
        if(arr[i]>0){
            cnt++;
        }
    }
    cout<<cnt-1;
    return 0;
}