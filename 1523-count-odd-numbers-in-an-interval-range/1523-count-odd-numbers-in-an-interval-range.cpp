class Solution {
public:
    bool isOdd(int x){
        if(x%2 != 0) return true;
        
    return false;
    }
    int countOdds(int low, int high) {
        int count = 0;
        for(int i=low; i<=high;i++){
            if(isOdd(i)) count++;
        }
        return count;
    }
};