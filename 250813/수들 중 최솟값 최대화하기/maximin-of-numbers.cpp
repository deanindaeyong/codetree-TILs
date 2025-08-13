#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n;
int grid[10][10];

vector<pair<int,int>> x;
int maxx=INT_MIN;

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
    
        for(int j=0;j<n;j++){
            if(!isused2[cnt]&&!isused3[j]){
                
                isused2[cnt]=1;
                isused3[j]=1;
                x.push_back({cnt,j});
                color(cnt+1);
                x.pop_back();
           
                isused2[cnt]=0;
                isused3[j]=0;

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
