class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> idx(nums.begin(), nums.end());

        sort(nums.begin(), nums.end());
        // [2, 7, 11, 15]
        int start = 0, end = nums.size() - 1;
        
        while (start < end)
        {
            if (nums[start] + nums[end] > target)
                --end;
            else if (nums[start] + nums[end] < target)
                ++start;
            else
                break;
        }
        int ans1, ans2;

        for (int i = 0; i < idx.size(); ++i)
            if (nums[start] == idx[i])
            {
                ans1 = i;
                break;
            }

        for (int i = 0; i < idx.size(); ++i)
            if (ans1 != i && nums[end] == idx[i])
            {
                ans2 = i;
                break;
            }

        return {ans1, ans2}; 
    }
};