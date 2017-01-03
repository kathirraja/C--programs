#include<iostream.h>
#include<conio.h>
int parent [10];
class kruskal
{
	int a,b,u,v,i,j,n,noofedges;
	int visited[10],min,mincost,cost[10][10];
	public:kruskal()
	{
		noofedges=1;
		mincost=0;
	}
	void read();
	void kruskals(int cost[][10],int n);
};
void kruskal::read()
{
	cout<<"enter the no. of vertix\n";
	cin>>n;
	cout<<"enter the adjacency matrix\n";
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		cin>>cost[i][j];
		if(cost[i][j]==0)
		cost[i][j]=999;
	}
	kruskals(cost,n);
}
void kruskal::kruskals(int cost[][10],int n)
{
	cout<<"the minimum cost edges are\n";
	while(noofedges<n)
	{
		min=999;
		for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		if(cost[i][j]<min)
		{
			min=cost[i][j];
			a=u=i;
			b=v=j;
		}
		while(parent[u])
		u=parent[u];
		while(parent[v])
		v=parent[v];
		if(u!=v)
		{
			noofedges++;
			cout<<"\nedge("<<a<<"->" <<b<<")="<<min;
			mincost+=min;
			parent[v]=u;
		}
		cost[a][b]=cost[b][a]=999;
	}
	cout<<"\nminimum cost="<<mincost;
}
void main()
{
	clrscr();
	kruskal k;
	k.read();
	getch();
}