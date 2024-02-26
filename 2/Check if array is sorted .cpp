class Solution {
public:
    // Function to solve the problem
    bool solve(vector<int> &nums){
        int count = 0; // Initialize a counter for the number of times the array is not sorted
        
        // Iterate through the array starting from index 1
        for(int i=1; i<nums.size(); i++){
            // Check if the current element is less than the previous element
            if(nums[i] < nums[i-1])
                count++; // Increment count if the array is not sorted in ascending order
        }
        
        // Check if the last element is greater than the first element
        if(nums[nums.size()-1] > nums[0])
            count++; // Increment count if the array is not cyclically sorted
        
        // Return true if the count is less than or equal to 1, indicating the array is either sorted or cyclically sorted
        return count <= 1;
    }
    
    // Function to check if the array can be cyclically sorted
    bool check(vector<int>& nums) {
        // Call the solve function to check if the array is sorted or cyclically sorted
        return solve(nums);
    }
};
