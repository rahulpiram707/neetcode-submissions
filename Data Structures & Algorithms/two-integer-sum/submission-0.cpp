class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> numbers;
        for(int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i];
            for(int j = 0; j < nums.size(); j++)
            {
                if(temp + nums[j] == target && i != j)
                {
                    if(i<j)
                    {
                        numbers.push_back(i);
                        numbers.push_back(j);
                        return numbers;
                    }
                    else
                    {
                        numbers.push_back(j);
                        numbers.push_back(i);
                       return numbers;
                    }
                }
            }
        }
    
}
};