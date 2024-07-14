#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a;
    int cnt=0,sum=0;
    for(int i=0;i<10;i++){

        cin>>a;
        if(a>=0 && a<=200)
        {sum+=a;
        cnt++;}
        
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/cnt;
    return 0;
}