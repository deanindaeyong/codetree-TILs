#include <iostream>
using namespace std;
void cd(int a,int b){
    int max=1;
    if(a<b){
        a=a;
        b=b;
    }
    else {int temp= a;
        a=b;
        b=temp;
        }
    for(int i=2;i<b;i++){
        if(a%i==0 && b%i==0){
            max=i;
        }
    }
    cout<<max;

}
int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    cd(n,m);
    return 0;
}