#include <iostream>
#include <cstring>
#define MAX 100000
#define OFFSET 10000
using namespace std;

int main() {
    int n,a;
    char b;
    cin>>n;
    int curr=0;
    int x1[MAX]={0,},x2[MAX]={0,};
    char arr[MAX][10]={};
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b=='R'){
            x1[i]+=OFFSET;
            x2[i]+=OFFSET;
            x1[i]=curr;
            x2[i]=curr+a;
            for(int j=x1[i];j<x2[i];j++){
                strcpy(arr[j],"B");
            }
            curr+=a;
            
        }else{
            x1[i]+=OFFSET;
            x2[i]+=OFFSET;
            x1[i]=curr-a;
            x2[i]=curr;
            for(int j=x1[i];j<x2[i];j++){
                strcpy(arr[j],"W");
            }
            curr=curr-a;
        }
    }
    int cntb=0,cntw=0,cnt_t=0;

    for(int i=0;i<MAX;i++){
        int cntbw=0,cntwb=0;
        for(int j=0;j<10;j++){
            
        if('B'==arr[i][j]){
            cntb++;
            cntbw++;

        }
        if('W'==arr[i][j]){
            cntw++;
            cntwb++;
        }
        
        
        }
        if(cntbw>=2 && cntwb>=2){
            cnt_t++;
        }
           
    }
    cout<<cntb<<" "<<cntw<<" "<<cnt_t;

    return 0;
}