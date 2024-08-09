#include <iostream>
#include <climits>
using namespace std;

int n;
string a;

int main() {
    cin >> n;
    cin >> a;
    
    int max_dist = 0;
    
    // 각 빈자리에 사람을 배치해보면서 최적의 경우를 찾는다
    for (int i = 0; i < n; i++) {
        if (a[i] == '0') {
            a[i] = '1'; // 사람을 배치
            
            int min_dist = INT_MAX;
            int prev_index = -1;
            
            // 모든 좌석을 순회하면서 가장 가까운 두 사람 간의 거리 계산
            for (int j = 0; j < n; j++) {
                if (a[j] == '1') {
                    if (prev_index != -1) {
                        int dist = j - prev_index;
                        min_dist = min(min_dist, dist);
                    }
                    prev_index = j;
                }
            }
            
            max_dist = max(max_dist, min_dist);
            a[i] = '0'; // 배치했던 사람을 다시 제거
        }
    }
    
    cout << max_dist << endl;
    
    return 0;
}