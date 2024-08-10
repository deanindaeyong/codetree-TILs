#include <iostream>
using namespace std;

int n, k;
int a[100];

bool ok(int max_val) {
    int last_position = 0; // 현재 위치 (시작은 1번 돌, 인덱스 0)
    for (int i = 1; i < n; i++) {
        if (a[i] <= max_val && (i - last_position) <= k) {
            last_position = i; // 점프 가능한 위치로 업데이트
        }
    }
    return last_position == n - 1; // 마지막 돌에 도달했는지 확인
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int left = *min_element(a, a + n);
    int right = *max_element(a, a + n);
    int answer = right;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (ok(mid)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer << endl;
    return 0;
}