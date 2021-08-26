class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        int array[2];
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = 0; j < nums.size(); j++)
            {
                if(i == j)
                {
                    continue;
                }
                else // when  i does not equal to j
                {
                    if(nums[i] + nums[j] == target) 
                    {
                        
                        result.assign({i, j});
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        return result;
    }
    
};
