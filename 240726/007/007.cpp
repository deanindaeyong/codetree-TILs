#include <iostream>
using namespace std;
string a;
char b;
int c;
class mission{
    public:
        string c;char p;int t ;
        mission(string c ,char p ,  int t){
            this-> c= c;
            this-> p=p;
            this->t=t;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>a>>b>>c;
    mission x=mission(a,b,c);
    cout<<"secret code : "<<x.c<<endl;
    cout<<"meeting point : "<<x.p<<endl;
    cout<<"time : "<<x.t;
    return 0;
}