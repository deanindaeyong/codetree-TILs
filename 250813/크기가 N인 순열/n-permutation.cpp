#include <iostream>
#include <vector>
using namespace std;

int n;
bool isused[9];
vector<int> x;
void func(int a){
    if(a==n){
        for(int i=0;i<x.size();i++){
            cout<<x[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!isused[i]){
            isused[i]=1;
            x.push_back(i);
            func(a+1);
            x.pop_back();
            isused[i]=0;
        }
    }
}
int main() {
    cin >> n;
    func(0);

    // Please write your code here.

    return 0;
}
