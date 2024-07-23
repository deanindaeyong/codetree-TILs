#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string a[n];
    int cnt=0,cnta=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt+=a[i].length();
        if(a[i][0]=='a'){
            cnta++;
        }
            }

cout<<cnt<<" "<<cnta;
    return 0;
}