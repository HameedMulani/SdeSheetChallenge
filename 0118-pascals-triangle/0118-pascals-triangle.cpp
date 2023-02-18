class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> output;
        // Base cases...
        if(numRows == 0)  return output;
        // Traverse all the elements through a loop
        for(int i=0; i<numRows; i++)
            output.push_back(vector<int>(i + 1, 1));    // Initialize the first row of the pascal triangle as {1}.
        // For generating each row of the triangle...
        for (int i = 2; i < numRows; i++)
            // Run an inner loop from j = 1 to j = {previous row size} for calculating element of each row of the triangle.
            for (int j = 1; j < output[i].size() - 1; ++j)
                // Calculate the elements of a row, add each pair of adjacent elements of the previous row in each step of the inner loop.
                output[i][j] = output[i - 1][j - 1] + output[i - 1][j];
        return output;      // After the inner loop gets over, simply output the row generated.
    }
};