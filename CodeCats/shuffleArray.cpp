class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> result;
        int count =0;
        int i =0;
        int j = n;
        while(i<n && j<nums.size()){
            if(count%2==0){
                result.push_back(nums[i]);
                i++;
                count++;
            }
            else{
                result.push_back(nums[j]);
                j++;
                count++;
            }

        }

        while(i<n){
            result.push_back(nums[i]);
            i++;
        }

        while(j<nums.size()){
            result.push_back(nums[j]);
            j++;
        }


        return result;
    }
};
