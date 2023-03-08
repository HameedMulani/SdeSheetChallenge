class Solution {
public:
    bool canEatAll(vector<int>& piles, int mid, int h){
        int actualHours = 0;
        for(int &x : piles){
            actualHours += x/mid; //7/3 = 2
            
            if(x%mid !=0) actualHours++; // 7%3 = 1
        }
        return actualHours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(begin(piles), end(piles));
        
        while(l<r){
             int mid = l + (r-l)/2; // per hr I can eat mid number of Bananas
             
            if(canEatAll(piles, mid, h)){
                r = mid; // isse bade to hohijayge if m =3 ,4, ,5,6, to hoge to min rakh r ko mid kar
            }else{
                l = mid+1; 
            }
        }
        return l;
    }
};