#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int minMaxValueOnPath(int n, int k, int arr[]) {
    int dp[100];  // n의 최대 크기인 100으로 고정 크기 배열 사용
    fill_n(dp, 100, INT_MAX); // dp 배열을 INT_MAX로 초기화
    dp[0] = arr[0];

    for (int i = 1; i < n; ++i) {
        for (int j = max(0, i - k); j < i; ++j) {
            dp[i] = min(dp[i], max(dp[j], arr[i]));
        }
    }

    return dp[n - 1];
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100];  // n의 최대 크기인 100으로 고정 크기 배열 사용
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = minMaxValueOnPath(n, k, arr);
    cout << result << endl;

    return 0;
}