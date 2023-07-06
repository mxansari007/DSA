class Solution {
public:
    int trap(vector<int>& height) {
        
        int leftMax[height.size()];
        int rightMax[height.size()];

        int balance = INT_MIN;
        for(int i =0; i<height.size(); i++){
            if(height[i] > balance){
                balance = height[i];
            }
            leftMax[i] = balance;
        }

        balance = INT_MIN;
        for(int i =height.size()-1; i>=0; i--){
            if(height[i] > balance){
                balance = height[i];
            }
            rightMax[i] = balance;
        }


        int totalWater = 0;

        for(int i =0; i<height.size(); i++){
            totalWater+=min(leftMax[i],rightMax[i]) - height[i];
        }

        return totalWater;
    }
};