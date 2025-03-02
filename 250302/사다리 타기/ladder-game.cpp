#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<pair<int, int>> ladders;
vector<int> final_result;
vector<pair<int, int>> min_ladders;

vector<int> play_game(const vector<pair<int, int>>& selected_ladders) {
    vector<int> position(N);
    for (int i = 0; i < N; i++) position[i] = i;
    
    for (const auto& ladder : selected_ladders) {
        swap(position[ladder.second - 1], position[ladder.second]);
    }
    return position;
}

void find_min_ladders(int idx, vector<pair<int, int>> selected_ladders) {
    if (!min_ladders.empty() && selected_ladders.size() >= min_ladders.size()) return;
    if (play_game(selected_ladders) == final_result) {
        min_ladders = selected_ladders;
        return;
    }
    for (int i = idx; i < M; i++) {
        selected_ladders.push_back(ladders[i]);
        find_min_ladders(i + 1, selected_ladders);
        selected_ladders.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    ladders.resize(M);
    for (int i = 0; i < M; i++) {
        cin >> ladders[i].second >> ladders[i].first;
    }
    
    sort(ladders.begin(), ladders.end());
    final_result = play_game(ladders);
    
    find_min_ladders(0, {});
    cout << min_ladders.size() << '\n';
    return 0;
}
