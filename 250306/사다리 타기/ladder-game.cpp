#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;
vector<pair<int,int>> ladder;

vector<int> finalpos;
int minn=INT_MAX;
vector<int> play_game(const vector<pair<int,int>>& ladders){
    vector<int> position(n+1);
    for(int i=1;i<=n;i++) position[i]=i;
    for(const auto& l:ladders){
        swap(position[l.second],position[l.second+1]);
    }
    return position;
}
void min_dis(int idx,vector<pair<int,int>> selected_ladder){
    if(play_game(selected_ladder)==finalpos){
   
        minn=min((int)selected_ladder.size(),minn);
        return;
    }
    for(int i=idx;i<m;i++){
        selected_ladder.push_back(ladder[i]);
        min_dis(i+1,selected_ladder);
        selected_ladder.pop_back();
    }
    

}
int main() {
    cin>>n>>m;
    ladder.resize(m);
    for(int i=0;i<m;i++){
        cin>>ladder[i].second>>ladder[i].first;
    }
    sort(ladder.begin(),ladder.end());
    finalpos=play_game(ladder);
    min_dis(0,{});
    cout<<minn;
    // Please write your code here.
    return 0;
}