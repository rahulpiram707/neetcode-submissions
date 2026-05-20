class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i];
            int index = i;
            for(int i = 0; i < nums.size(); i++)
            {
                if(temp == nums[i] && i != index)
                {
                    return true;
                }
            }
        }
        return false;
    }
};