/*
MY YOUTUBE VIDEO ON THIS Qn : https://www.youtube.com/watch?v=81h8O-0U5oo
Company Tags                : Adobe, Microsoft, Amazon, Citygroup, Twitch and many more (see my video above to find all companies)
Leetcode Link               : https://leetcode.com/problems/lru-cache/
*/
​
//Approach-1 (Brute Force)
class LRUCache {
public:
vector<pair<int, int>> cache;
int n;
LRUCache(int capacity) {
n = capacity;
}
int get(int key) {
for(int i = 0; i<cache.size(); i++) {
if(cache[i].first == key) {
int val = cache[i].second;
pair<int, int> temp = cache[i];
cache.erase(cache.begin()+i);
cache.push_back(temp);
return val;
}
}
return -1;
}
void put(int key, int value) {
for(int i = 0; i<cache.size(); i++) {
if(cache[i].first == key) {
cache.erase(cache.begin()+i);
cache.push_back({key, value});