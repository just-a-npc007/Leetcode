    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for (int i=0;i<= nums.size()-1;i++){
            for (int j=0;j<= nums.size()-1;j++){
                if (i==j){
                    continue;
                }
                else if (nums.at(i)+nums.at(j)==target){
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
            if (!(result.empty())){
                break;
            }
        }
        return result;
        
    }
