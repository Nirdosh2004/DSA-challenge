class Solution {
public:
    // Function to generate a single row of Pascal's triangle
    // Time Complexity: O(row)
    // Space Complexity: O(row)
    vector<int> generateRow(int row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1); // First element of each row is always 1
        for(int col = 1 ; col < row ; col++){
            ans = ans * (row - col); // Calculate the next element using formula
            ans = ans / col; // Divide by column number
            ansRow.push_back(ans); // Add the calculated element to the row
        }
        return ansRow; // Return the generated row
    }

    // Function to generate Pascal's triangle up to numRows
    // Time Complexity: O(numRows^2)
    // Space Complexity: O(numRows^2)
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans; // Initialize the result vector
        for(int i = 1 ; i <= numRows ; i++){
            ans.push_back(generateRow(i)); // Generate each row and add it to the result
        }
        return ans; // Return the generated Pascal's triangle
    }
};
