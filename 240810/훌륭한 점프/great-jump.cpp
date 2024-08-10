#include <iostream>
using namespace std;

int n, k;
int a[100];

bool ok(int max_val) {
    int last_position = 0; // 시작 위치는 0 (첫 돌)
    for (int i = 1; i < n; i++) {
        if (a[i] <= max_val && i - last_position <= k) {
            last_position = i;
        }
    }
    return last_position == n - 1; // 마지막 돌에 도달했는지 확인
}

int main() {
    cin >> n >> k;
    int maxxx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxxx = max(maxxx, a[i]);
    }

    int minn = maxxx;
    for (int i = 1; i <= maxxx; i++) { // 가능한 최대값의 범위를 탐색
        if (ok(i)) {
            minn = i;
            break; // 가장 작은 최댓값을 찾으면 반복 종료
        }
    }

    cout << minn << endl;
    return 0;
}