#include <iostream>
using namespace std;
bool Int_number(string a){
    int len=a.length();
    int cnt=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i==j)continue;
            if(a[i]==a[j]){
                cnt++;
                break;
            }
        }
    } 
    if(len-1==cnt){
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
        string m=to_string(i);
        if(Int_number(m)){
            cntt++; 
        }
    }
    cout<<cntt;
    return 0;
}