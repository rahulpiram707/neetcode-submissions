class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int count = 0;
        std::vector<int> temp; 
        for(int i = 0; i < nums.size() ; i ++ )
        {
            if(nums[i] == val)
            {
                count ++;
            }
            else
            {
                temp.push_back(nums[i]);
            }
        }
        nums = temp;
        return temp.size();
    }
};