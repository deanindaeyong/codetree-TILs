#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;
bool comp(tuple<string,int,double> a,tuple<string,int,double>b){
    string c1,c2;
    int a1,a2;
    double b1,b2;
    tie(c1,a1,b1)=a;
    tie(c2,a2,b2)=b;
    return a1>a2;
    
}
int main() {
    string a;
    int h;
    double w;
    cout<<fixed;
    cout.precision(1);
    tuple<string,int,double> student[5];
    for(int i=0;i<5;i++){
        cin>>a>>h>>w;
        student[i]=make_tuple(a,h,w);

    }
    sort(student,student+5);
    cout<<"name"<<endl;
    for(int i=0;i<5;i++){
        int he;
        double we;
        string na;
        tie(na,he,we)=student[i];
        cout<<na<<" "<<he<<" "<<we<<endl;

    }
    cout<<endl;
    sort(student,student+5,comp);
    cout<<"height"<<endl;
    for(int i=0;i<5;i++){
        int he;
        double we;
        string na;
        tie(na,he,we)=student[i];
        cout<<na<<" "<<he<<" "<<we<<endl;

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}