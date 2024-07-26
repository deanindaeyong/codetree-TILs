#include <iostream>
#include <algorithm>
using namespace std;
int n;
class Student{
    public:
    string name;
    int kor,eng,math;
    Student(string name, int kor, int eng, int math):
    name(name),kor(kor),eng(eng),math(math){}
    Student(){}
};
bool compare(const Student &a,const Student &b){
    if(a.kor==b.kor){
        if(a.eng==b.eng){
            return a.math>b.math;
        }else return a.eng>b.eng;
    }else return a.kor>b.kor;
}
int main() {
    // 여기에 코드를 작성해주세요.;
    cin>>n;
    string s;
    int a,b,c;
    Student x[n];
    for(int i=0;i<n;i++){
        cin>>s>>a>>b>>c;
        x[i]=Student(s,a,b,c);
    }
    sort(x,x+n,compare);
    for(int i=0;i<n;i++){
        cout<<x[i].name<<" "<<x[i].kor<<" "<<x[i].eng<<" "<<x[i].math<<endl;
    }
    return 0;
}