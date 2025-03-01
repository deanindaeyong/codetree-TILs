#include <iostream>
#include <vector>
using namespace std;

int n,btcnt=0;
vector<int> ans;
bool check(vector<int>& x){
    int i=0;
    while(i<n){
        int cur=x[i];
        int cnt=0;
        while(i<n&&cur==x[i]&&cnt<cur){
            cnt++;
            i++;
        }
        if(cur!=cnt) return false;
    }
    return true;
}
void fuc(int cur_num){
    if(cur_num==n+1){
        if(check(ans)){
            btcnt++;
        }
        return;
    }
    for(int i=1;i<=4;i++){
        ans.push_back(i);
        fuc(cur_num+1);
        ans.pop_back();
    }
}
int main() {
    cin>>n;
    fuc(1);
    cout<<btcnt;
    // Please write your code here.
    return 0;
}