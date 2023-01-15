class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashSet;
        // insert arr into hashSet  o(N)
        for(int num: nums)
            hashSet.insert(num);
        
        int longConSeq = 0;
        // iterate arrr and chekc if num-1 exists in hashSet O(n)
        for(int num: nums){
            if(!hashSet.count(num-1)) // check if num-1 is not exixts 5 -> 4
            {
                int currNum = num;
                int currConSeq = 1;
                
                // O(n) total
                while(hashSet.count(currNum+1)) // 1 -> 2 , 2-> 3 check if exists
                {
                    currNum = currNum+1;
                    currConSeq += 1;
                } 
                
                longConSeq = max(currConSeq, longConSeq);
                
            } //if end  
        }// for end
     return longConSeq;
    }
};