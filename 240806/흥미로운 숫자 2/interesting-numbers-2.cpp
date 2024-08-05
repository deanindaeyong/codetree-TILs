#include <iostream>
using namespace std;
bool Int_number(int a){
    int b=a;
    int arr[7];
    int index=0,cnt=0;
    for(int i=0;i<7;i++){
        arr[i]=b%10;
        b/=10;
        index=i;
        if(b<10) break;
    }
    arr[++index]=b;
    for(int i=0;i<=index-1;i++){
        for(int j=i+1;j<=index;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }

    }
    if(index-1==cnt){
        return true;
    }
   else return false;
}
int x,y;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>x>>y;
    int cntt=0;
    for(int i=x;i<=y;i++){
        if(Int_number(i)){
            cntt++; 
        }
    }
    cout<<cntt;
    return 0;
}