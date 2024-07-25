#include <iostream>
using namespace std;

// 최대공약수(GCD)를 구하는 함수
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// 최소공배수(LCM)를 구하는 함수
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// 재귀적으로 수열의 최소공배수를 구하는 함수
int lcm_recursive(int numbers[], int n, int index) {
    if (index == n - 1)
        return numbers[index];
    return lcm(numbers[index], lcm_recursive(numbers, n, index + 1));
}

int main() {
    int n;
    cin >> n;
    int numbers[10]; // 주어진 조건에 따라 최대 10개의 수가 입력됨
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    int result = lcm_recursive(numbers, n, 0);
    cout << result << endl;
    
    return 0;
}