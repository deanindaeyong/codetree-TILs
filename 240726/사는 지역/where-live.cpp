#include <iostream>
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

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin>>n;
    Ppl ppl[n];
    for(int i=0;i<n;i++){
        string a,b,c;

        cin>>a>>b>>c;
        ppl[i]=Ppl(a,b,c);
    }
    cout<<"name "<<ppl[2].name<<endl;
    cout<<"addr "<<ppl[2].address<<endl;
    cout<<"city "<<ppl[2].city;
    return 0;
}