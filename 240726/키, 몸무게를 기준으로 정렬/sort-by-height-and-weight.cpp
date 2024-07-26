#include <iostream>
#include <algorithm>
using namespace std;
int n;
class Student{
    public:
    string name;
    int height,weight;
    Student(string name,int height,int weight):name(name),height(height),weight(weight){}
    Student(){}
};
bool comp(const Student &a,const Student &b){
    if(a.height==b.height){
        return a.weight>b.weight;
    }else return a.height<b.height;
}
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int b,c;
    cin>>n;
    Student x[n];
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        x[i]=Student(a,b,c);
    }
    sort(x,x+n,comp);
    for(int i=0;i<n;i++){
        cout<<x[i].name<<" "<<x[i].height<<" "<<x[i].weight<<endl;
    }
    return 0;
}