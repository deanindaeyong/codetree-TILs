#include <iostream>
#include <algorithm>
using namespace std;
bool compare(pair<int,int>a,pair<int,int> b){
    if(a.first+a.second==b.second+b.first){
       return a.first<b.first;
    }else return a.first+a.second<b.first+b.second;

}
int b,n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>b;
    pair<int,int> arr[1000];

    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n,compare);
    for(int i=0;i<n;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
   }
    int numb=n;
    while(numb>0){
        int sum=0;
        for(int i=0;i<numb-1;i++){
            sum+=arr[i].first+arr[i].second;
        }
        sum+=(arr[numb-1].first*0.5)+arr[numb-1].second;
        if(sum<=b){
            cout<<numb;
            return 0;
        }else numb--;

    }
    return 0;
}
/*200
300
299 799
200 999

200
299 499
299 798
200 100 */