#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    int price;
    int shipping;
    int total_cost;
    int discounted_cost;
};

bool compare_total_cost(const Student &a, const Student &b) {
    return a.total_cost < b.total_cost;
}

bool compare_discounted_cost(const Student &a, const Student &b) {
    return a.discounted_cost < b.discounted_cost;
}

int main() {
    int N, B;
    cin >> N >> B;
    
    Student students[N];
    
    for (int i = 0; i < N; ++i) {
        cin >> students[i].price >> students[i].shipping;
        students[i].total_cost = students[i].price + students[i].shipping;
        students[i].discounted_cost = (students[i].price / 2) + students[i].shipping;
    }
    
    sort(students, students + N, compare_total_cost);
    
    int max_students = 0;
    
    for (int i = 0; i < N; ++i) {
        int current_budget = B - students[i].discounted_cost;
        if (current_budget < 0) continue;
        
        int count = 1;  // 현재 학생 포함
        for (int j = 0; j < N; ++j) {
            if (i == j) continue;  // 이미 할인 적용된 학생 제외
            if (current_budget >= students[j].total_cost) {
                current_budget -= students[j].total_cost;
                count++;
            } else {
                break;
            }
        }
        
        max_students = max(max_students, count);
    }
    
    cout << max_students << endl;
    
    return 0;
}



/*#include <iostream>
#include <algorithm>
using namespace std;
bool compare(pair<int,int>a,pair<int,int> b){
    return a.first+a.second<b.first+b.second;


 
    
    if(a.first==b.first){
        return a.second<b.second;}
    else return a.first<b.first;
    
  //  return a.first+a.second<b.first+b.second;


5 997
198 101
198 101
198 101
200 0
200 100
우선순위 총예산
     a 가작은거 b가 작은거

12 75
4 6
10 9
8 20
6 14
2 8
12 3
4 16
4 1
18 2
10 8
10 19
4 2

}
int b,n;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>b;
    pair<int,int> arr[1000],temp[1000];

    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
        temp[i].first=arr[i].first;temp[i].second=arr[i].second;
    }
    //sort(arr,arr+n,compare);
    //for(int i=0;i<n;i++){
     //   cout<<arr[i].first<<" "<<arr[i].second<<endl;
   //}
    int numb=n;
    while(numb>0){
        int maxx=-1;
        for(int i=0;i<n;i++){
            if(maxx<0.5*arr[i].first+arr[i].second){
                maxx=arr[i];
            }
        }
        
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
    cout<<-1;
    return 0;
}
200
300
299 799
200 999

200
299 499
299 798
200 100 

5 997
200 0
200 100
198 101
198 101
198 101
*/