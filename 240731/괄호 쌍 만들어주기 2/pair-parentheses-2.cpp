#include <iostream>
using namespace std;
string a;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>a;
    int cnt=0;
    int len=a.length();
    for(int i=0;i<len-1;i++){
        for(int j=i+2;j<len-1;j++){
            
            if(a[i]=='('&& a[i+1]=='('&& a[j]==')'&& a[j+1]==')'){
                    cnt++;
                }
        }
    }
        
    
    cout<<cnt;
    return 0;
}