#include <iostream>
using namespace std;

int n, k;
int a[100];

bool ok(int max_val) {
    int last_position = 0; // 1번 돌에서 시작 (0번째 인덱스)
    for (int i = 1; i < n; i++) { // 2번 돌부터 n번 돌까지 확인
        if (a[i] <= max_val) {
            if (i - last_position <= k) {
                last_position = i;
            }
        }
    }
    return last_position == n - 1; // n번 돌에 도달했는지 확인
}

int main() {
    cin >> n >> k;
    int maxxx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxxx = max(maxxx, a[i]);
    }

    int minn = 100; // 최댓값의 최소를 구하기 위한 초기값 설정
    for (int i = 1; i <= maxxx; i++) { // maxxx부터 1까지 내려오면서 확인
        if (ok(i)) {
            minn = i;
            break; // 최솟값을 찾았으므로 더 이상 탐색할 필요 없음
        }
    }

    cout << minn;
    return 0;
}