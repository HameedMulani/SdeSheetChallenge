class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       if(matrix.size() == 0) return false;
        
        int n = matrix.size(); // row
        int m = matrix[0].size(); //cols
        
        int low = 0;
        int hi = (n*m)-1;
        
        while(low<=hi){
            int mid = (low + (hi-low)/2);
            if(matrix[mid/m][mid%m] == target) {
                return true;
            }else if(matrix[mid/m][mid%m] < target){
                low = mid+1;
            }else{
                hi = mid-1;
            }
        }
        
        // for(int i = 0; i < matrix.size(); i++)
        // {
        //     for(int j = 0; j < matrix[0].size(); j++)
        //     {
        //         if(matrix[i][j] == target) return true;
        //     }    
        // }
        return false;
        
        
    }
};