#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt=0;
    int sum=0;
    while(1){
        cin>>n;
        if(n<20||n>=30){
            break;
        }
        sum+=n;
        ++cnt;
        
    }
    cout<<fixed;
    cout.precision(2);
    cout<<(double) sum/cnt;
    return 0;
}