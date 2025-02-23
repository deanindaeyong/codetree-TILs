#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
int k,n;
void print(){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
    cout<<endl;
}
void func(int cur_num){
    if(cur_num==n+1){
        print();
        return;
    }
    for(int i=1;i<=k;i++){
        ans.push_back(i);
        func(cur_num+1);
        ans.pop_back();
    }
}
int main() {
    cin>>k>>n;
    func(1);
    // Please write your code here.
    return 0;
}