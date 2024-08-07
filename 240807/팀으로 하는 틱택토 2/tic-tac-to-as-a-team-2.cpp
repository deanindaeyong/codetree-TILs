#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b,c;
    int arr[11]={0,},maxx=0;;
    
            cin>>a;
            cin>>b;
            cin>>c;
    
    for(int i=0;i<3;i++){
        arr[(a[i])-'0']++;
        arr[(b[i])-'0']++;
        arr[(c[i])-'0']++;
    }
    for(int i=0;i<=10;i++){
        if(arr[i]>maxx){
            maxx++;
        }
    }
    
    int cnt=0;

    for(int i=0;i<3;i++){
            //case 1
            if((a[i]==b[i] &&a[i]!=c[i])||(a[i]!=b[i]&&a[i]==c[i] )||(a[i]!=b[i]&&b[i]==c[i])){
                cnt++;
            }
            if(i==0){
                if((a[i]==a[i+1] &&a[i]!=a[i+2])||(a[i]!=a[i+1]&&a[i]==a[i+2] )||(a[i]!=a[i+1]&&a[i+1]==a[i+2]))
                    cnt++;
                if((b[i]==b[i+1] &&b[i]!=b[i+2])||(b[i]!=b[i+1]&&b[i]==b[i+2] )||(b[i]!=b[i+1]&&b[i+1]==b[i+2]))
                    cnt++;
                if((c[i]==c[i+1] &&c[i]!=c[i+2])||(c[i]!=c[i+1]&&c[i]==c[i+2] )||(c[i]!=c[i+1]&&c[i+1]==c[i+2]))
                    cnt++;
                if((a[i]==b[i+1] &&a[i]!=c[i+2])||(a[i]!=b[i+1]&&a[i]==c[i+2] )||(a[i]!=b[i+1]&&b[i+1]==c[i+2]))
                    cnt++;
            }
            if(i==2)
            {
                if((a[i]==b[i-1] &&a[i]!=c[i-2])||(a[i]!=b[i-1]&&a[i]==c[i-2] )||(a[i]!=b[i-1]&&b[i-1]==c[i-2]))
                cnt++;
            }

        
    }
   // if(maxx<cnt){
    //    cnt=maxx;
   // }
    cout<<cnt;

   // 111  010.  001. 000. 000   
   // 11.  010   011. 111. 000
   // 1 1. 010.  101. 000. 111

    
    
    return 0;
}