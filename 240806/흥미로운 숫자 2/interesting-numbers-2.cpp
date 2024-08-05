#include <iostream>
#include <string>
using namespace std;

// 흥미로운 숫자인지 확인하는 함수
bool isInteresting(int num) {
    string str = to_string(num);
    int len = str.length();
    
    for (int i = 0; i < len; ++i) {
        // 각 자리를 기준으로 다른 숫자 하나로 교체
        char original = str[i];
        for (char c = '0'; c <= '9'; ++c) {
            if (c == original) continue; // 같은 숫자로 교체하는 것은 무의미
            
            str[i] = c;
            // 나머지 자리가 모두 같은 숫자인지 확인
            bool is_valid = true;
            char first = str[0];
            for (int j = 1; j < len; ++j) {
                if (str[j] != first) {
                    is_valid = false;
                    break;
                }
            }
            if (is_valid) return true; // 흥미로운 숫자 발견
        }
        // 원래 숫자로 복원
        str[i] = original;
    }
    return false;
}

int main() {
    int X, Y;
    cin >> X >> Y;

    int count = 0;
    for (int i = X; i <= Y; ++i) {
        if (isInteresting(i)) {
            ++count;
        }
    }

    cout << count << endl;

    return 0;
}