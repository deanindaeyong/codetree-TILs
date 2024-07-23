#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    int sum=0;
    cin>>c;
    for(int i=0;i<c.length();i++){
        if(isdigit(c[i])!=0){
            sum+=c[i];
        }
    }
    cout<<sum;
    return 0;
}