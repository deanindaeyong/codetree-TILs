#include <iostream>
using namespace std;
class bomb{
    public:
    string a;
    char b;
    int c;
    bomb(string a,char b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    char b;
    int c;
    cin>>a>>b>>c;
    bomb bom=bomb(a,b,c);
    cout<<"code : "<<bom.a<<endl;
    cout<<"color : "<<bom.b<<endl;
    cout<<"second : "<<bom.c;

    return 0;
}