#include <iostream>
#include <algorithm>
using namespace std;
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    cin.ignore();
    string x[n];
    for(int i=0;i<n;i++){
        getline(cin,x[i]);
    }
    sort(x,x+n);
    for(int i=0;i<n;i++){
        cout<<x[i];
        cout<<endl;
    }
    return 0;
}