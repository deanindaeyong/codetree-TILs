#include <iostream>
#include <vector>
using namespace std;
#define MAX_N 100000
#define MAX_K 6
#define MAX_DIGIT 10
int n,arr[MAX_N];
void radix_sor(){
    int p=1;
    
    for(int pos=0;pos<MAX_K;pos++){
        vector<int> new_arr[MAX_DIGIT];
        for(int i=0;i<n;i++){
            int digit=(arr[i]/p)%10;
            new_arr[digit].push_back(arr[i]);
        }
        int index=0;
        for(int i=0;i<MAX_DIGIT;i++){
            for(int j=0;j<(int)new_arr[i].size();j++){
                arr[index++]=new_arr[i][j];
            }
            
        }
        p*=10;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    radix_sor();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*#include <iostream>
using namespace std;
int n,arr[100000];
int set_digit(int num,int pos){
    for(int i=0;i<pos;i++){
        num=num/10;
    }
    num=num%10;
    return num;
}

void radix_sort(){
    for(int pos=0;pos<6;pos++){
        int arr_new[10][100000]={};
        int bucket[10]={};
        for(int i=0;i<n;i++){
            int digit=set_digit(arr[i],pos);
            arr_new[digit][bucket[digit]++]=arr[i];
        }
        int index=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<bucket[i];j++){
                arr[index++]=arr_new[i][j];
            }
        }
      
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    radix_sort();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/