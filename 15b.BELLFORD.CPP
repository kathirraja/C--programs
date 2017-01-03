#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 20
#define INFINITY 9999
class BellFordAlgorithm
{
private:
int mNoOfNodes;
int mAdjacentMatrix[MAX][MAX];
int mStartVertex;
int mDistance[MAX];
int mPredecessor[MAX];
public:
void ReadGraph();
void Initialize();
void Update();
void Check();
void Algorithm();
};
void BellFordAlgorithm::ReadGraph()
{
cout << "Enter the no. of nodes in the graph ::";
cin >> mNoOfNodes;
cout << "Enter the adjacency matrix (cost)for the graph ::\n";
for ( int i = 1;i <= mNoOfNodes;i++ )
for ( int j = 1;j <= mNoOfNodes;j++ )
cin >> mAdjacentMatrix[i][j];
cout << "Enter the start vertex ::";
cin >> mStartVertex;
}
void BellFordAlgorithm::Initialize()
{
for ( int i = 1;i <= mNoOfNodes;i++ )
{
mDistance[i] = INFINITY;
mPredecessor[i] = 0;
}
mDistance[mStartVertex] = 0;
}
void BellFordAlgorithm::Update()
{
for ( int i = 1;i <= mNoOfNodes - 1;i++ )
{
for ( int u = 1;u <= mNoOfNodes;u++ )
{
for ( int v = 1;v <= mNoOfNodes;v++ )
{
if ( mAdjacentMatrix[u][v] != 0 )
{
if ( mDistance[v] > mDistance[u] + mAdjacentMatrix[u][v] )
{
mDistance[v] = mDistance[u] + mAdjacentMatrix[u][v];
mPredecessor[v] = u;
}
}
}
}
}
}
void BellFordAlgorithm::Check()
{
for ( int u = 1;u <= mNoOfNodes;u++ )
{
for ( int v = 1;v <= mNoOfNodes;v++ )
{
if ( mAdjacentMatrix[u][v] != 0 )
{
if ( mDistance[v] > mDistance[u] + mAdjacentMatrix[u][v] )
{
cout << "does not exist's ";
return;
}
}
}
}
cout << "\n\nThere is no negative weight cycle and\n";
cout << "****** The final paths and the distacnes are ******\n\n";
for ( int i = 1;i <= mNoOfNodes;i++ )
{
cout << "path for node " << i << " is ::\n";
int arr[MAX], k = 1;
int j = i;
while ( mPredecessor[j] != 0 )
{
arr[k] = mPredecessor[j];
k++;
j = mPredecessor[j];
}
for ( -k;k > 0;k-- )
cout << arr[k] << "->";
cout << i << endl;
cout << "distance is " << mDistance[i] << endl << endl << endl;
}
}
void BellFordAlgorithm::Algorithm()
{
ReadGraph();
Initialize();
Update();
Check();
}
void main()
{
clrscr();
BellFordAlgorithm oBellFordAlgorithm;
oBellFordAlgorithm.Algorithm();
getch();

}