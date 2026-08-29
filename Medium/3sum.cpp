   vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <vector<int>> result;
        for(int i=0;i<=nums.size()-1;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;}
            unordered_set <int> seen;
            for( int j=i+1;j<=nums.size()-1;j++){
                 int c=-(nums[i]+nums[j]);
                if(seen.count(c)){
                    result.push_back({nums[i],nums[j],c});
                    while (j+1 <= (int)nums.size()-1 && nums[j] == nums[j+1]) j++;
                }
                seen.insert(nums[j]);
                
                }
            }
        return result;

        }
