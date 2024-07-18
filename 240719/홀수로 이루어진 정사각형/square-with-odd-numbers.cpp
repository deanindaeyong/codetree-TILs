#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<7+2*i+2*j <<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*   1  2  3  4
1 11 13 15 17
2 13
3
4
*/