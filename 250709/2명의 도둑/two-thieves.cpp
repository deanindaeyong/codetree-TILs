#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, c;
int weight[10][10];

int getMaxValue(int row, int colStart) {
    vector<int> items;
    for (int i = 0; i < m; ++i)
        items.push_back(weight[row][colStart + i]);

    int maxVal = 0;
    int size = items.size();
    for (int mask = 1; mask < (1 << size); ++mask) {
        int sum = 0, value = 0;
        for (int i = 0; i < size; ++i) {
            if (mask & (1 << i)) {
                sum += items[i];
                value += items[i] * items[i];
            }
        }
        if (sum <= c) maxVal = max(maxVal, value);
    }
    return maxVal;
}

int main() {
    cin >> n >> m >> c;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> weight[i][j];

    int result = 0;
    for (int i1 = 0; i1 < n; ++i1) {
        for (int j1 = 0; j1 <= n - m; ++j1) {
            int val1 = getMaxValue(i1, j1);
            for (int i2 = i1; i2 < n; ++i2) {
                for (int j2 = 0; j2 <= n - m; ++j2) {
                    if (i1 == i2 && !(j1 + m <= j2 || j2 + m <= j1)) continue;
                    int val2 = getMaxValue(i2, j2);
                    result = max(result, val1 + val2);
                }
            }
        }
    }

    cout << result << endl;
    return 0;
}
