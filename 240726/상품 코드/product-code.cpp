#include <iostream>
using namespace std;
class Goods{
    public:
    string name;
    int price;
    Goods(string name="codetree", int price=50){
        this->name=name;
        this->price=price;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int b;
    Goods one=Goods();
    cout<<"product "<<one.price<<" is "<<one.name<<endl;
    cin>>a>>b;

    one=Goods(a,b);
    cout<<"product "<<one.price<<" is "<<one.name<<endl;
    return 0;
}