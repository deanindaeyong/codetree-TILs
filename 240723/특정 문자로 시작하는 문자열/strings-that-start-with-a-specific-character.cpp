#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    char x;
    int cnt=0,len=0;
    cin>>x;
    for(int i=0;i<n;i++){
        if(c[i][0]==x){
            cnt++;
            len+=c[i].length();
        }
    }

    cout<<cnt<<" ";
    cout<<fixed;
    cout.precision(2);
    cout<<(double) len/cnt;
    return 0;
}