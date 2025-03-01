#include <iostream>
#include <vector>
using namespace std;

int n, btcnt = 0;
vector<int> ans;

bool check(vector<int>& x) {
    int i = 0;
    while (i < n) {
        int cur = x[i];
        int cnt = 0;
        if(cur==1) {i++;continue;}
        while (i < n && x[i] == cur) {
            cnt++;
            i++;
        }
        if (cur != cnt) {
            return false;
        }
    }
    return true;
}

void func(int cur_num) {
    if (cur_num == n + 1) {
        if (check(ans)) {
            btcnt++;
        }
        return;
    }
    for (int i = 1; i <= 9; i++) {
        ans.push_back(i);
        func(cur_num + 1);
        ans.pop_back();
    }
}

int main() {
    cin >> n;
    func(1);
    cout << btcnt;
    return 0;
}