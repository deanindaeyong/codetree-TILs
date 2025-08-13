#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n;
int grid[10][10];

vector<pair<int,int>> x;
int maxx=INT_MIN;
bool isused1[10][10];
bool isused2[10];
bool isused3[10];
void color(int cnt){
    int minn=INT_MAX;
    if(cnt==n){
        for(int i=0;i<x.size();i++){
            
                minn=min(minn,grid[x[i].first][x[i].second]);
        }
        maxx=max(maxx,minn);
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!isused1[i][j]&& !isused2[i]&&!isused3[j]){
                isused1[i][j]=1;
                isused2[i]=1;
                isused3[j]=1;
                x.push_back({i,j});
                color(cnt+1);
                x.pop_back();
                isused1[i][j]=0;
                isused2[i]=0;
                isused3[j]=0;

            }
            

        }
        
    }
}
int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    color(0);
    cout<<maxx;
    // Please write your code here.

    return 0;
}
