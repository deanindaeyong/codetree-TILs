#include <iostream>
#include <algorithm>
using namespace std;
int n;
class Ppl{
    public:
    string name,address,city;
    Ppl(string name, string address, string city){
        this->name=name;
        this->address=address;
        this->city=city;
    }
    Ppl(){}
};
bool compare(const Ppl &a,const Ppl &b){
    return a.name>b.name;
}
int main() {
    // 여기에 코드를 작성해주세요.
    
    cin>>n;
    Ppl ppl[n];
    for(int i=0;i<n;i++){
        string a,b,c;

        cin>>a>>b>>c;
        ppl[i]=Ppl(a,b,c);
    }
    sort(ppl,ppl+n,compare);
    cout<<"name "<<ppl[0].name<<endl;
    cout<<"addr "<<ppl[0].address<<endl;
    cout<<"city "<<ppl[0].city;
    return 0;
}