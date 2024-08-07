#include <iostream>
using namespace std;
int n;
string a;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cin>>a;
    int cnt=0;
    for(int i=0;i<n;i++){
        string temp=a.substr(0,i+1);
        for(int j=i+1;j<n;j++){
            if(temp==a.substr(j,i+1)){
                cnt++;
                //cout<<temp<<endl;
                break;
            }
        }
    }
    cout<<cnt+1;
    return 0;
}