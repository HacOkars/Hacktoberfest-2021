//Mother Vertex

#include <bits/stdc++.h>

using namespace std;

void dfs(int **adj, bool *visited, int n, int startVertex)

{

	visited[startVertex] = true;

	for(int i = 0 ; i < n ; i++)

		if(adj[startVertex][i] == 1 && !visited[i])

			dfs(adj, visited, n, i);

		

}

int main()

{

	int v, e;

	cin >> v >> e;

	cout << endl;

	int **adj = new int*[v];

	for(int i = 0 ; i < v ; i++)

		adj[i] = new int[v];

	for(int i = 0 ; i < v ; i++)

		for(int j = 0 ; j < v ;j++)

			adj[i][j] = 0;

	for(int i = 0 ; i < e ; i++)

	{

		int l, r;

		cin >> l >> r;

		adj[l][r] = 1;

	}

	bool *visited = new bool[v];

	for(int i = 0 ; i < v ; i++)

		visited[i] = false;

	int flag;

	for(int i = 0 ; i < v ; i++)

	{

		flag = 0;

		visited[i] = true;

		dfs(adj, visited, v, i);

		for(int j = 0 ; j < v ; j++)

		{

			if(visited[j] == false)

			{

				flag = 1;

				break;

			} 

		}

		if(flag == 0)

			cout << i << "  ";

	

		// reset

		for(int j = 0 ; j < v ; j++)

			visited[j] = false;

	}

	delete []visited;

	for(int i = 0 ; i < v ; i++)

		delete[] adj[i];

	delete[] adj;

	

	

	return 0;

}
