class Solution {
public:
      bool dfs(int node,vector<int> adj[],vector<int> &visited, vector<int> &dfsvisited){
        visited[node] = 1;
        dfsvisited[node] = 1;
        
        for(auto i : adj[node]){
            if(!visited[i]){
                if(dfs(i, adj, visited, dfsvisited)) return true;
            }else if(dfsvisited[i]){
                return true;
            }
        }
        
        dfsvisited[node] = false;
        return false;
    }
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) { 
	   int p = prerequisites.size();
	   vector<int> adj[numCourses];
	   for(int i =0;i<p;i++){
	       int u = prerequisites[i][0];
	       int v = prerequisites[i][1];
	       
	       adj[u].push_back(v);
	   }
	   
	   vector<int> visited(numCourses, 0);
	   vector<int> dfsvisited(numCourses, 0);
	   bool isCycle = 0;
	   for(int i = 0;i<numCourses;i++){
	       if(!visited[i]){
	           if(dfs(i, adj, visited, dfsvisited)){
	               isCycle = 1;
	               break;
	           }
	       }
	   }
	   
	   if(isCycle){
	       return false;
	   }else{
	       return true;
	   }   
    }
};