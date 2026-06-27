class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ind = 0; int n = nums.size();
        for (int b = n/2; b >= 1; b /= 2) {
            while (ind+b < n && nums[ind+b] <= target) ind += b;
        }

        return (nums[ind] == target ? ind : -1);
    }
};