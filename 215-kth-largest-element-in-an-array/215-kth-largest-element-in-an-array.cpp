class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
           
        priority_queue<int> pq;
        for(int i = 0; i<k; i++){
            pq.push(-1*nums[i]);
        }
        for(int i = k; i<nums.size(); i++){
            if(pq.top() > (-1*nums[i])){
                pq.pop();
                pq.push(-1*nums[i]);
            }
        }
        return (-1*pq.top());
    }
};