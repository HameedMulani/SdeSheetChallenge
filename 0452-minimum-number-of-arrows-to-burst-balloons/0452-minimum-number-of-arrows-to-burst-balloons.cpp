class Solution {
public:
    bool static sorted(const vector<int>&v1,const vector<int>&v2){
        return v1[1]< v2[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), sorted);
        int targetPoint = points[0][1];
        int arrow = 1;
        for(int i=1; i<points.size();i++){
            if(targetPoint>=points[i][0] && targetPoint<=points[i][1]){
                continue;
            }else{
                arrow++;
                targetPoint = points[i][1];
            }
        }
        return arrow;
    }
    
};