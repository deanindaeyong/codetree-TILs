#include <iostream>
using namespace std;
int x,y;
bool palin(int a){
    int arr[7];
    int b=a;
    int cnt=0;
   while(b>0){
        arr[cnt]=b%10;
        b/=10;
        cnt++;
   }
   arr[cnt]=b;
   
   for(int i=0;i<cnt/2;i++){
    if(arr[i]!=arr[cnt-i-1])
        return false;
   }
    return true;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>x>>y;
    int cnt=0;
    for(int i=x;i<=y;i++){
        if(palin(i)){
            cnt++;
        }
    }
   cout<<cnt;
    return 0;
}