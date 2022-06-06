class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> paskal;
        
        for (int i = 0; i<numRows; i++)
        {
            vector<int> v(i+1, 1);
            
            for (int j = 1; j < i; j++)
            {
                // v[j] = // sum of above 2 boxes
                // current row -> i, previous row -> i-1
                v[j] = paskal[i-1][j] + paskal[i-1][j-1];
            }
            
            paskal.push_back(v);
            }
        return paskal;
        }

    
};