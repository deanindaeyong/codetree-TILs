#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,x,y;
    cin>>a>>b>>x>>y;

    int min_d=INT_MAX;
    for(int i=0;i<3;i++){
        int dis=0;
        //case 1 a->b
        if(i==0){
            dis=abs(b-a);
            
        }
        //case 2 a->x->y->b
        if(i==1){
            dis+=abs(x-a);
            dis+=abs(b-y);
       
        }

        //case 3 a->y->x->b
        if(i==2){
            dis+=abs(y-a);
            dis+=abs(b-x);
          
        }
        

        min_d=min(min_d,dis);
    }
    cout<<min_d;
    

    return 0;
}