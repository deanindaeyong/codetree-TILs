#include <iostream>
using namespace std;
bool ox(int m, int d){
    //1,3,5,7,8,10,12
    //4,6,9,11
    if(m==2){
        if(d>=1 && d<=28){
            return true;
        }
        else return false;
    }else if(m<1 ||m>12||d<1||d>31){
        return false;
    }
    
    else if((m%2!=0 &&m<9 )||(m%2==0 &&m>9)){
        if(d>=1 && d<=31){
            return true;
        }else return false;
    }else {if(d<=30){
        return true;
        } else {return false;}}
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m,d;
    cin>>m>>d;
    if(ox(m,d)){
        cout<<"Yes";
    }else cout<<"No";
    return 0;
}