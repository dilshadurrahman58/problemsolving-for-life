class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int num1, num2;
        for(int i=0; i<nums.size(); i++)
            for(int j=0; j<nums.size(); j++)
            {   
                //cout<<nums.end();
                if(i!=j)
                {
                    if(nums[i]+nums[j] == target)
                    {
                        num1 = i;
                        num2 = j;
                    }
                }
            }
        
        result.push_back(num1);
        result.push_back(num2);
        
        return result;
        
        
    }
};