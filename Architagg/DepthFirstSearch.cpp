//DFS

#include <bits/stdc++.h>

using namespace std;

int c;

void dfs(int **adj, bool *visited, int n, int startVertex)

{

	c++;	visited[startVertex] = true;

	cout << startVertex << "\t";

	c++;

	for(int i = 0 ; i < n ; i++, c++)

		if(adj[startVertex][i] == 1 && !visited[i])

			dfs(adj, visited, n, i);

		

}

int main()

{

	c = 0;

	int v, e;

	c++;

	cout<<"enter number of vertices and edges respectively"<<endl;

	cin >> v >> e;

	c++;

	cout << endl;

	int **adj = new int*[v];

	for(int i = 0 ; i < v ; i++, c++)

		adj[i] = new int[v];

	for(int i = 0 ; i < v ; i++, c++)

		for(int j = 0 ; j < v ;j++, c++)

			adj[i][j] = 0;

	for(int i = 0 ; i < e ; i++, c++)

	{

		c++;

		int l, r;

		cin >> l >> r;

		c++;

		adj[l][r] = 1;

		adj[r][l] = 1;

	}

	c++;

	bool *visited = new bool[v];

	for(int i = 0 ; i < v ; i++, c++)

		visited[i] = false;

	int startVertex;

	c++;

	cout << "Enter start vertex: ";

	cin >> startVertex;

	c++;

	dfs(adj, visited, v, startVertex);

	

	cout << "\nStep count: " << c;

	return 0;

}
