#include <iostream>

#define MAX_N 100
#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int n;
int x1[MAX_N], x2[MAX_N];

int checked[MAX_R + 1];

int main() {
    // 입력
    cin >> n;
    
	// 현재 위치
	int cur = 0;
	
    for(int i = 0; i < n; i++) {
		int distance;
		char direction;
        cin >> distance >> direction;
		
		if(direction == 'L') {
			// 왼쪽으로 이동할 경우 : cur - distance ~ cur까지 경로 이동
			x1[i] = cur - distance;
			x2[i] = cur;
			cur -= distance;
		}
		else {
			// 오른쪽으로 이동할 경우 : cur ~ cur + distance까지 경로 이동
			x1[i] = cur;
			x2[i] = cur + distance;
			cur += distance;
		}
        
        // OFFSET을 더해줍니다.
        x1[i] += OFFSET;
        x2[i] += OFFSET;
    }
    
    // 구간을 칠해줍니다.
    // 구간 단위로 진행하는 문제이므로
    // x2[i]에 등호가 들어가지 않음에 유의합니다.
    for(int i = 0; i < n; i++)
        for(int j = x1[i]; j < x2[i]; j++)
            checked[j]++;
    
    // 2번 이상 지나간 영역의 크기를 구합니다.
    int cnt = 0;
    for(int i = 0; i <= MAX_R; i++)
        if(checked[i] >= 2)
            cnt++;
    
    cout << cnt;
    return 0;
}

/*#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,x,arr[2001]={0,};
    char y;
    cin>>n;
    int curr=1000;
    for(int i=0;i<n;i++){
        int index=0;
        cin>>x>>y;  
        if(y=='R'){

        for(int j=1;j<=x;j++){
            ++arr[curr+j]
            }
        curr+=x;
        }else{
            for(int j=1;j<=x;j++){
            ++arr[curr-j];
            }
            curr-=x;
        }
    }
    int cnt=0;
    for(int i=0;i<2001;i++){
        if(arr[i]>=2){
            cnt++;
        }
    }
    cout<<cnt;


    return 0;
}
*/