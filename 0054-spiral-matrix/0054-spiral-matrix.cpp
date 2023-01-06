class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0, bot = matrix.size()-1; // rows
        int left = 0, rit = matrix[0].size()-1; // cols
        int dir = 0;
        vector<int> ans;
        while(top <= bot && left<= rit){
            if(dir==0) // left to right
            {
                for(int i=left; i<=rit; i++)
                    ans.push_back(matrix[top][i]);
                top++;
            }else if(dir == 1) // top to bottom
            {
                for(int i=top; i<=bot; i++)
                    ans.push_back(matrix[i][rit]);
                rit--;
            }else if(dir == 2) // right to left
            {
                for(int i=rit; i>=left; i--)
                    ans.push_back(matrix[bot][i]);
                bot--;
            }else if(dir == 3) // bottom to top
            {
                 for(int i=bot; i>=top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
         dir = (dir+1)%4;
        }
        return ans;
        
    }
};