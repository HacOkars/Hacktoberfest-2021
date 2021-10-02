#include <iostream>

using namespace std;

void print(int **edges, int n,int sv,bool *vis)
{
    cout<<sv<<endl;
    vis[sv]=true;
    
    for(int i=0; i<n;i++)
    {
        if(i==sv)
        continue;
        
        if(edges[sv][i]==1)
        {
            if(vis[i])
            continue;
            
            print(edges,n,i,vis);
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
	
	bool *vis = new bool[n]();
	
	print(edges,n,0,vis);
 
    return 0;
}

