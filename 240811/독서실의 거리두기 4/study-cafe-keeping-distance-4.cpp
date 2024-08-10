#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string a;
    cin>>n;
    cin>>a;
    int max_dist=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1') continue;
        a[i]='1';
        for(int j=i+1;j<n;j++){
            if(a[j]=='1')continue;
            a[j]='1';
            int min_dist = INT_MAX;
            int prev_index = -1;
            
            for(int k=0;k<n;k++){
                if(a[k]=='1'){
                    if(prev_index!=-1){
                        int dist=k-prev_index;
                        min_dist=min(min_dist,dist);
                    }
                    prev_index=k;
                }
            }
            max_dist = max(max_dist, min_dist);
            a[j]='0';

        }
        a[i]='0';
    }
    cout<<max_dist;
    return 0;
}