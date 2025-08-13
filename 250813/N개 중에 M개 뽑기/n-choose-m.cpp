#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> a;
void per(int x, int start){
    if(x==M){
        for(int i=0;i<M;i++){
                cout<<a[i]<<" ";
            
        }
        cout<<endl;
        return;
    }
    for(int i=start;i<=N;i++){
       
            a.push_back(i);
            per(x+1,i+1);
            a.pop_back();
  
    }
}
int main() {
    cin >> N >> M;
    per(0,1);
    // Please write your code here.

    return 0;
}
