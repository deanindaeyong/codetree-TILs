#include <iostream>
#include <algorithm>
using namespace std;
class Codename{
    public:
    char code;
    int score;
    Codename(char code,int score){
        this->code=code;
        this->score=score;
    }
    Codename(){}
};
bool compare(struct Codename &a, struct Codename &b){
    return a.score<b.score;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    int b;
    Codename codename[5];
    for(int i=0;i<5;i++){
        cin>>a>>b;
        codename[i]=Codename(a,b);
    }

    sort(codename,codename+5,compare);
    Codename codename1=codename[0];
    cout<<codename1.code<<" "<<codename1.score;

    return 0;
}