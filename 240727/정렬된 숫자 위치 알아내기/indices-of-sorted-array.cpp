#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int n;

bool comp(pair<int,int> a,pair<int,int>b){
    if(a.first==b.first)
    return a.second<b.second;
    else return a.first<b.first;
}
int main() {
    // 여기에 코드를 작성해주세요.
    
    cin>>n;
    pair<int,int> pos[n],pos2[n];
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        pos[i]=make_pair(a,i+1);
        pos2[i]=make_pair(a,i+1);
    }
    sort(pos,pos+n,comp);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(pos2[i].first==pos[j].first && pos2[i].second==pos[j].second){
                cout<<j+1<<" ";
                break;
            }
        }
    }
    return 0;
}
//3 1 6 2 7 30 1
//1 1 2 3 6 7 30