// see blog -> https://zobayer.blogspot.com/2010/11/matrix-exponentiation.html

vector<vector<int>> matrixExponen(vector<vector<int>> &a, int n){
	if(n == 0){
		int sz = a.size();
		vector<vector<int>> ans(sz, vector<int> (sz, 0));
		for(int i=0; i<sz; i++) ans[i][i] = 1;
		return ans;
	}
	if(n == 1) return a;
	vector<vector<int>> temp = matrixExponen(a, n/2);
	vector<vector<int>> ans = multiply(temp, temp);
	if(n & 1) ans = multiply(ans, a);
	return ans; 
}