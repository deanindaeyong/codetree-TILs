#include <iostream>
using namespace std;
class nextlevel{
    public:
    string user; int lv;
    nextlevel(string user="codetree" , int lv=10){
        this->user=user;
        this->lv=lv;
    }

    
};
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int b;
    nextlevel x=nextlevel();
    cout<<"user "<<x.user<<" lv "<<x.lv<<endl;
    cin>>a>>b;
    nextlevel y=nextlevel(a,b);
    cout<<"user "<<y.user<<" lv "<<y.lv;
    return 0;
}