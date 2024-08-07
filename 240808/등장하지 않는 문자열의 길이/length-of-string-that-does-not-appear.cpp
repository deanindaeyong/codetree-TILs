#include <iostream>
using namespace std;
int n;
string a;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cin>>a;
    int cnt=0;
    bool find=false;
    //
    int index=0;
    string temp;
    for(int i=0;i<n;i++){ //cnt=2
        
        if(!find){
            temp=a.substr(i,cnt+1); // 
        }else {temp+=a.substr(i,1);cout<<temp<<endl;} //1 
        for(int j=i+1;j<n;j++){     
            if(temp==a.substr(j,cnt+1)){// 1 2
                cnt++;
                find=true;
                cout<<"i= "<<i <<" j= "<<j<<endl;
             //   cout<<temp<<endl;
                break;
            }else find =false;
        }
    }
    cout<<cnt+1;
    return 0;
}