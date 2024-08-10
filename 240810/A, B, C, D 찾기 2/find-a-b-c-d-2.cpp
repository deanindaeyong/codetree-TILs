#include <iostream>
#include <algorithm>
using namespace std;
  int a,b,c,d;
  int arr[15];

int main() {
    // 여기에 코드를 작성해주세요.
  
    
    for(int i=0;i<15;i++){
        cin>>arr[i];
    }
    sort(arr,arr+15);
    a=arr[0];
    b=arr[1];
    if(a+b!=arr[2]){
        c=arr[2];
    }else c=arr[3];
    d=arr[14]-a-b-c;
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}
/*
    for(int i=1;i<=40;i++){
        for(int j=1;j<=40;j++){
            for(int k=1;k<=40;k++){
                for(int l=1;l<=40;l++){
                    if(cor(i,j,k,l)){
                        cout<<i<<" "<<j<<" "<<k<<" "<<l;
                        return 0;
                    }
                }
            }
        }
    }*/