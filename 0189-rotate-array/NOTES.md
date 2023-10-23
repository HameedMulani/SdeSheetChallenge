int n = nums.size();
k = k%n;
if(k==0 || k==n)return;
vector<int>temp;
for(int it = 0; it<=k; it++){
temp.push_back(nums[it]);
}
int till_k = 0;
for(int i = n-k; i<n; i++){
nums[till_k++] = nums[i];
}
int from_k = 0;
for(int c= n-k-1; c<n; c++){
nums[c] = temp[from_k++];
}