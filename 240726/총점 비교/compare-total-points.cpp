#include <iostream>
#include <algorithm>
using namespace std;
int n;
class Student{
    public:
    string name;
    int a,b,c;
    Student(string name,int a,int b,int c):name(name),a(a),b(b),c(c){

    }
    Student(){}
};
bool compare(const Student &x,const Student &y){
    return x.a+x.b+x.c<y.a+y.b+y.c;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    Student x[n];
    string s;
    int a,b,c;
    for(int i=0;i<n;i++){
        cin>>s>>a>>b>>c;
        x[i]=Student(s,a,b,c);
    }
    sort(x,x+n,compare);
    for(int i=0;i<n;i++){
        cout<<x[i].name<<" "<<x[i].a<<" "<<x[i].b<<" "<<x[i].c<<endl;
    }
    return 0;
}