#include <iostream>
#include <queue >

using namespace std;

void print(int **edges, int n,int sv)
{
 queue<int> pen;
 bool *vis = new bool[n];
 vis[sv]=true;
 pen.push(sv);
 while(!pen.empty())
 {
 	 int c = pen.front();
 	 pen.pop();
 	 cout<<c<<endl;
 	 for(int i=0;i<n;++i)
 	 {
 	 	if(edges[c][i] && !vis[i])
 	 	{
 	 		vis[i]=true;
 	 		pen.push(i);
 	 		
		}
	}
 }
    
}

int main()
{
    int n,e;
    cin>>n>>e;

	int **edges=new int*[n];
	for(int i=0;i<n;++i)
	{
	    edges[i]= new int[n];
	    for(int j=0;j<n;++j)
	    edges[i][j]=0;
	}
	
	for(int i=0;i<e;++i)
	{
	    int f,s;
	    cin>>f>>s;
	    edges[f][s]=1;
	    edges[s][f]=1;
	}
	
	
	
	print(edges,n,0);
 
    return 0;
}

