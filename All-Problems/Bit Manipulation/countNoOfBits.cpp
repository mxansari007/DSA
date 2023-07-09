#include<bits/stdc++.h>
using namespace std;


int main(){
    int num = 8;
    int dp[num+1] ={0};
    int totalCounts = 0;
     dp[1] = 1;

    for(int i =1; i<=num; i++){
        int count =0;
        int save = i;
        int j =i;
        while(j){
            
            if(dp[j]!=0){
                count =count+dp[j];
                totalCounts+=count;
                dp[save] = count;
                break;
            }else{
                if(j&1){
                    count++;
                }
            }
            j = j>>1;
        }
    }

    cout<<totalCounts;

}