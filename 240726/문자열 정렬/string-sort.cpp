#include <iostream>
#include <algorithm>
using namespace std;
string x;
int main() {
    // 여기에 코드를 작성해주세요.
    getline(cin,x);
    sort(x.begin(),x.end());
    cout<<x;
    return 0;
}