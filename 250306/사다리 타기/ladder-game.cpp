#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
int n,m;
int minn=INT_MAX;
vector<int> final_pos;
vector<pair<int,int>> ladders;
vector<int> play_game(const vector<pair<int,int>> ld){
    vector<int> position(n);
    for(int i=0;i<n;i++){
        position[i]=i;
    }
    for(const auto& l:ld){
        swap(position[l.second-1],position[l.second]);
    }
    return position;
}
void func(int idx,vector<pair<int,int>> selected_ladder){
    if(play_game(selected_ladder)==final_pos){
        minn=min(minn,(int)selected_ladder.size());
        return;
    }
    for(int i=idx;i<m;i++){
        selected_ladder.push_back(ladders[i]);
        func(i+1,selected_ladder);
        selected_ladder.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    ladders.resize(m);
    for(int i=0;i<m;i++){
        cin>>ladders[i].second>>ladders[i].first;
    }
    
    sort(ladders.begin(),ladders.end());
    final_pos=play_game(ladders);
    func(0,{});
    // Please write your code here.
    cout<<minn;
    return 0;
}