#include <iostream>
#include <climits>
using namespace std;

int n, m, c;
int weight[10][10];
int temp[5];
int maxx;
int ans=INT_MIN;
void findmaxsum(int idx, int cur_weight,int cur_sum){
    if(idx==m){
        if(cur_weight<=c){
            maxx=max(maxx,cur_sum);
            
        }
        return ;
    }
    findmaxsum(idx+1,cur_weight,cur_sum);

    findmaxsum(idx+1,cur_weight+temp[idx],cur_sum+temp[idx]*temp[idx]);
}
int findmax(int a,int b){
    for(int i=b;i<=b+m-1;i++){
        temp[i-b]=weight[a][i];
    }
    maxx=0;
    findmaxsum(0,0,0);
    return maxx;


}

bool possible(int a, int b,int c, int d){
    if(b+m-1>=n||d+m-1>=n) return false;
    if(a!=c) return true;
    if(!(b+m-1<d||d+m-1<b)) return false;
    return true;
}
int main() {
    cin >> n >> m >> c;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> weight[i][j];
        }
    }

    for(int sx1=0;sx1<n;sx1++){
        for(int sy1=0;sy1<n;sy1++){
            for(int sx2=0;sx2<n;sx2++){
                for(int sy2=0;sy2<n;sy2++){

                    if(possible(sx1,sy1,sx2,sy2)){
                        ans=max(ans,findmax(sx1,sy1)+findmax(sx2,sy2));
                    }
                }
            }
        }
    }

    // Please write your code here.
    cout<<ans;
    return 0;
}