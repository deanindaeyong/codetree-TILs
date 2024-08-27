#include <iostream>
using namespace std;
int compare(int a, int b,int c){
        //묵찌빠 묵빠찌
        //찌빠묵 찌묵빠
        //빠묵찌 빠찌묵
        //
        //1=묵 2=찌 3=빠
        if(c==0){
        if(a==1){if(b==2)return 1;}
        else if(a==2){if(b==3) return 1;
        }
        else if(a==3){if(b==1) return 1;}
        //묵빠찌
        }else if(c==1){
            if(a==1){if(b==3)return 1;}
        else if(a==2){if(b==1) return 1;
        }
        else if(a==3){if(b==2) return 1;}
        //빠찌묵
        }

        return 0;

}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,a[100],b[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int maxx=-1;
    for(int i=0;i<2;i++){
        int cnt=0;
            for(int j=0;j<n;j++){
                cnt+=compare(a[j],b[j],i);
            }
        maxx=max(cnt,maxx);

    }
    cout<<maxx;
    //1=찌 2=빠 3=묵
    //1=빠 2=묵 3=찌
    return 0;
}