class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>m;
        // Store it into map with each ele count
        for(int i=0;i<tasks.size();i++){
            m[tasks[i]]++;
        }
        
        int mini=0;
        for(auto it: m){
            if(it.second==1) return -1;
            int count=0;
            while(it.second>3){
                it.second -=3;
                count++;
            }
            if(it.second)
                count++;
            mini += count;
        }
        return mini;
    }
    
};