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
        if(a[i]=='1')continue;
        a[i]='1';
        for(int j=i;j<n;j++){
            if(a[j]=='1') continue;
            a[j]='1';
            int prev_index=-1;
            int min_dis=INT_MAX;
            for(int k=0;k<n;k++){
                if(a[k]=='1'){
                    if(prev_index!=-1){
                        int dis=k-prev_index;
                        min_dis=min(dis,min_dis);

                    }
                    prev_index=k;
                }
            }
            max_dist=max(max_dist,min_dis);

            a[j]='0';
        }
        a[i]='0';
    }
    cout<<max_dist;
    return 0;
}