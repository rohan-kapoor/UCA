class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lower_bound = 0, upper_bound = nums.size() - 1;
        while(lower_bound <= upper_bound){
            int mid = lower_bound + ((upper_bound - lower_bound)/2);;
            if(nums[mid] == target) return mid;
            if(nums[lower_bound] <= nums[mid]){
                if(target < nums[mid] && target >= nums[lower_bound]) upper_bound = mid - 1;
                else lower_bound = mid + 1;
            }
            else{
                if(target > nums[mid] && target <= nums[upper_bound]) lower_bound = mid + 1;
                else upper_bound = mid - 1;
            }
        }
        return -1;
    }
};