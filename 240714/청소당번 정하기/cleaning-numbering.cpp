#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,cnt_c=0,cnt_co=0,cnt_b=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        
        
        if(i%12==0)
        cnt_b++;
        else if(i%3==0)
        cnt_co++;
        else if(i%2==0)
        cnt_c++;

    }
    cout<<cnt_c<<" "<<cnt_co<<" "<<cnt_b;
    return 0;
}