#include <iostream>
#include <algorithm>
using namespace std;
int n;
class Ppl{
    public:
    string name;
    int height,weight;
    Ppl(string name, int height, int weight){
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
    Ppl(){}
};
bool compare(const Ppl &a,const Ppl &b){
    return a.height<b.height;
}
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    int b,c;
    cin>>n;
    Ppl x[n];
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        x[i]=Ppl(a,b,c);
    }
    sort(x,x+n,compare);
    for(int i=0;i<n;i++){
        cout<<x[i].name<<" "<<x[i].height<<" "<<x[i].weight<<endl;
    }
    
    return 0;
}