        for(int i =0; i<nums.size(); i++){
        int picked = nums[i];

        for(int j = 0; j<i; j++){
            if(picked <= nums[j]){
            
                for(int k =i; k>=j; k--){
                    if(k == 0){
                        continue;
                    }
                    nums[k] = nums[k-1];
                }

                nums[j] = picked;
                break;
            }
        }
    }
