class Solution {
public:
bool solve(vector<int> &nums){
    int count = 0;
    for(int i=1 ; i<nums.size();i++){
        if(nums[i]<nums[i-1])count++;
    }
    if(nums[nums.size()-1]>nums[0])count++;
    return count <=1;
}
    bool check(vector<int>& nums) {
        return solve(nums);
    }
};
