int maxSubArray(vector<int>& nums) {
//kadane's algorithm

        int maxsofar = INT_MIN;
        int sum = 0;

        for(int i =0; i<nums.size(); i++){
              sum+=nums[i];
                   

                    if(maxsofar < sum){
                          maxsofar = sum;
                        }
                
                     if(sum<0){
                        sum = 0;
                    }
            }


        return maxsofar;
    }
