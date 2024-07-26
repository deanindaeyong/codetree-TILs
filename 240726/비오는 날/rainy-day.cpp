#include <iostream>
#include <algorithm>
using namespace std;
int n;
class Estimation{
    public:
    string date,day,weather;
    Estimation(string date, string day, string weather){
        this->date=date;
        this->day=day;
        this->weather=weather;
    }
    Estimation(){}
};
bool compare(const Estimation &a, const Estimation &b){
    return a.date<b.date;
}
bool rainy(const Estimation &a, const Estimation &b){
    return a.weather<b.weather;
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    Estimation es[n];
    for(int i=0;i<n;i++){
        string a,b,c;
        cin>>a>>b>>c;
        es[i]=Estimation(a,b,c);
    }
    sort(es,es+n,compare);
    stable_sort(es,es+n,rainy);
    cout<<es[0].date<<" "<<es[0].day<<" "<<es[0].weather;
    return 0;
}