#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    cin>>c;
    int cnt1=0;
    int cnt2=0;
    
    for(int i=0;i<c.length();i+=c.find("ee")+2){
        if(c.find("ee")!=string::npos){
            cnt1++;
        }
       
        
    }
    for(int j=0;j<c.length();j+=c.find("eb")+2){
        if(c.find("eb")!=string::npos){
            cnt2++;
        }
    }

    cout<<cnt1<<" "<<cnt2;
    return 0;
}