class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int p0 = 0; int p2 = n - 1;
        while (nums[p0] == 0 && p0 < n - 1) p0++;
        while (nums[p2] == 2 && p2 > 0) p2--;

        int curr = p0;

        while (curr <= p2) {
            if (nums[curr] == 0) {
                swap(nums[p0],nums[curr]); p0++; curr++;
            }
            else if (nums[curr] == 2) {
                swap(nums[p2],nums[curr]); p2--;
            }
            else curr++;
        }

        return;
    }
};