brute force
vector<int> pair;
for(int i=0; i<nums.size(); i++)
{
​
for(int j=i+1;j<nums.size(); j++)
{
if((nums[i]+nums[j])==target){
pair.push_back(i);
pair.push_back(j);
}
}
}
return pair;