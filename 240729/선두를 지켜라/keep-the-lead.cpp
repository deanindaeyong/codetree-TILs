#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    int va,vat,vb,vbt;
    int arra[1000000]={0,},arrb[1000000]={0,};
    int curr_a=0,curr_b=0,curr_ta=1,curr_tb=1;
    for(int i=1;i<=n;i++){
        cin>>va>>vat;
        
        for(int j=curr_ta;j<curr_ta+vat;j++){
            arra[j]=curr_a+va;
          //  cout<<arra[j]<<" ";
            curr_a+=va;
        }
        curr_ta+=vat;

// 0 1 2 6 7 9 11 13 15
//   t t t
    }
     for(int i=1;i<=n;i++){
        cin>>vb>>vbt;
            for(int j=curr_tb;j<curr_tb+vbt;j++){
            arrb[j]=curr_b+vb;

            curr_b+=vb;
            }
        curr_tb+=vbt;

    }
   int cnt=0,cnt2=0;
for(int i=0;i<curr_tb;i++){
   // cout<<arra[i]<<" "<<arrb[i]<<endl;
    if(i>0 && arra[i]>arrb[i] && arra[i-1]<=arrb[i-1]){
        cnt++;
    } else if(i>0 && arrb[i]>arra[i] && arrb[i-1]<=arra[i-1]){
        cnt++;
    }
}

cout<<cnt-1;

    return 0;
}