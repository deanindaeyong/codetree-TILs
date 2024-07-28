#include <iostream>
using namespace std;
int n,m;
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    int distance;
    char direction;
    int arr_a[10001]={0,},curr_a=0,cnt_a=0,t_ta=0;
    int arr_b[10001]={0,},curr_b=0,cnt_b=0,t_tb=0;
    //a가이동한
    for(int i=0;i<n;i++){
        cin>>direction>>distance;
        t_ta+=distance;
        if(direction=='R'){
            for(int j=curr_a;j<curr_a+distance;j++){
                arr_a[j]=cnt_a++;
            }
            curr_a+=distance;
        }else {
            for(int y=curr_a;y<curr_a+distance;y++){
                arr_a[y]=cnt_a--;
            }
            curr_a+=distance;
        }
    }
    for(int i=0;i<m;i++){
        cin>>direction>>distance;
        t_tb+=distance;
        if(direction=='R'){
            for(int j=curr_b;j<curr_b+distance;j++){
                arr_b[j]=cnt_b++;
            }
            curr_b+=distance;
        }else {
            for(int j1=curr_b;j1<curr_b+distance;j1++){
                arr_b[j1]=cnt_b--;
            }
            curr_b+=distance;
        }
    }
    //cout<<endl<<endl;
    int t=-1;
    if(t_ta<t_tb){
        t_ta=t_tb;
    }
      for(int i=0;i<t_ta;i++){
    
        if(i>0 && arr_a[i]==arr_b[i]){
           t=i;
            break;}
        
    }
    cout<<t;
    return 0;
}