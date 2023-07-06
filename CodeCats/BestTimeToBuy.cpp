class Solution {
public:

   
    int maxProfit(vector<int>& prices) {

    //Naive Approach
    // int i = 0;
    // int j = prices.size() -1;
    // int maxProfit = 0;
    // while(i < j ){


    //         for(int k = prices.size()-1; k > i; k--){
    //             if(prices[k] - prices[i] > maxProfit ){
    //                 maxProfit = prices[k] - prices[i];
    //             }
    //         }

    //     i++;
    // }

    // return maxProfit;

    int maxProfit =0;
    int lowesTillNow = INT_MAX;
    int diff = 0;

    for(int i =0; i<prices.size(); i++){
        if(prices[i]<lowesTillNow){
            lowesTillNow = prices[i];
        }

        diff = prices[i] - lowesTillNow;

        if(maxProfit < diff){
            maxProfit = diff;
        }
    }
return maxProfit;

    }
};