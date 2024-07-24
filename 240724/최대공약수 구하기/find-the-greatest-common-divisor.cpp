#include <iostream>
using namespace std;
void cd(int a,int b){
    int max=1;
    cin>>a>>b;
    for(int i=2;i<=min(a,b);i++){
        if(a%i==0 && b%i==0 &&i>max){
            max=i;
        }
    }
    cout<<max;

}
int main() {
    // Please write your code here.
    int 8,m;
    cin>>n>>m;
    cd(n,m);
    return 0;
}