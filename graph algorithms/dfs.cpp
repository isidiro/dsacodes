void dfs(vector<int> adj[], int src, vector<int> &visited, vector<int> &ans){
	if(visited[src]) return;
	ans.push_back(src);
	visited[src] = 1;
	for(int &x: adj[src]){
		if(!visited[x]){
			dfs(adj, x, visited, ans);
		}
	}
}