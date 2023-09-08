vector<int> bfs(vector<int> adj[], int src, vector<int> &visited){
	int n = visited.size();
	vector<int> ans;
	queue<int> q;
	q.push(src);
	visited[src] = 1;
	while(q.size()){
		int temp = q.front();
		q.pop();
		ans.push_back(temp);
		for(int &x: adj[src]){
			if(!visited[x]){
				visited[x] = 1;
				q.push(x);
			}
		}
	}
	return ans;
}