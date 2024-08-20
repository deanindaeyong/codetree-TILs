#include <iostream>
#include <algorithm>
using namespace std;
struct Pair{
    int first;
    int second;

};
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Pair x[100];
    for(int i=0;i<n;i++){
        cin>>x[i].first>>x[i].second;

    }
    stable_sort(x,x+n,[](const Pair& a,const Pair& b){
        return a.first<b.first;
    });
    int prev_index=0;
    int cnt=0;
    for(int i=0;i<n;i++){
      if(x[i].first==x[prev_index].first){
        if(x[i].second!=x[prev_index].second){
            cnt++;
        }
        
      }
      prev_index=i;
    }
    cout<<cnt;
    return 0;
}