#include<iostream.h>
#include<conio.h>
#define INFINITY 999
class DijkstraAlgorithm
{
private:
int mAdjMatrix[15][15];
int mPredecessor[15], mDistance[15];
//keep track of visited node
int mMark[15];
int mSourceVertex;
int mNumOfVertices;
public:
/* Read number of vertices, source vertex and Adjacency Matrix*/
void ReadVertex();
void Initialize();
int GetClosestUnmarkedNode();
void CalculateDistance();
void Output();
void PrintShortestPath ( int );
};
/* Read number of vertices, source vertex and Adjacency Matrix*/
void DijkstraAlgorithm::ReadVertex()
{
cout << "Enter the number of vertices of the graph(should be > 0)\n";
cin >> mNumOfVertices;
while ( mNumOfVertices <= 0 )
{
cout << "Enter the number of vertices of the graph(should be > 0)\n";
cin >> mNumOfVertices;
}
cout << "Enter the adjacency matrix for the graph\n";
cout << "To enter infinity enter " << INFINITY << endl;
for ( int i = 0;i < mNumOfVertices;i++ )
{
cout << "Enter the (+ve)weights for the row " << i << endl;
for ( int j = 0;j < mNumOfVertices;j++ )
{
cin >> mAdjMatrix[i][j];
while ( mAdjMatrix[i][j] < 0 )
{
cout << "Weights should be +ve. Enter the weight again\n";
cin >> mAdjMatrix[i][j];
}
}
}
cout << "Enter the source vertex\n";
cin >> mSourceVertex;
while ( ( mSourceVertex < 0 ) && ( mSourceVertex > mNumOfVertices - 1 ) )
{
cout << "Source vertex should be between 0 and" << mNumOfVertices - 1 << endl;
cout << "Enter the source vertex again\n";
cin >> mSourceVertex;
}
}
void DijkstraAlgorithm::Initialize()
{
for ( int i = 0;i < mNumOfVertices;i++ )
{
mMark[i] = 0;
mPredecessor[i] = -1;
mDistance[i] = INFINITY;
}
mDistance[mSourceVertex] = 0;
}
int DijkstraAlgorithm::GetClosestUnmarkedNode()
{
int min_distance = INFINITY;
int closest_unmarked_node;
for ( int i = 0;i < mNumOfVertices;i++ )
{
if ( ( !mMark[i] ) && ( min_distance >= mDistance[i] ) )
{
min_distance = mDistance[i];
closest_unmarked_node = i;
}
}
return closest_unmarked_node;
}
void DijkstraAlgorithm::CalculateDistance()
{
Initialize();
int min_distance = INFINITY;
int closest_unmarked_node;
int count = 0;
while ( count < mNumOfVertices )
{
closest_unmarked_node = GetClosestUnmarkedNode();
mMark[closest_unmarked_node] = 1;
for ( int i = 0;i < mNumOfVertices;i++ )
{
if ( ( !mMark[i] ) && ( mAdjMatrix[closest_unmarked_node][i] > 0 ) )
{
if ( mDistance[i] > mDistance[closest_unmarked_node] + mAdjMatrix[closest_unmarked_node][i] )
{
mDistance[i] = mDistance[closest_unmarked_node] + mAdjMatrix[closest_unmarked_node][i];
mPredecessor[i] = closest_unmarked_node;
}
}
}
count++;
}
}
void DijkstraAlgorithm::PrintShortestPath ( int node )
{
if ( node == mSourceVertex )
cout << ( char ) ( node + 97 ) << "..";
else
if ( mPredecessor[node] == -1 )
cout << "No path from “<<source<<”to " << ( char ) ( node + 97 ) << endl;
else
{
PrintShortestPath ( mPredecessor[node] );
cout << ( char ) ( node + 97 ) << "..";
}
}
void DijkstraAlgorithm::Output()
{
for ( int i = 0;i < mNumOfVertices;i++ )
{
if ( i == mSourceVertex )
cout << ( char ) ( mSourceVertex + 97 ) << ".." << mSourceVertex;
else
PrintShortestPath ( i );
cout << "->" << mDistance[i] << endl;
}
}
void main()
{
clrscr();
DijkstraAlgorithm oDijkstraAlgorithm;
oDijkstraAlgorithm.ReadVertex();
oDijkstraAlgorithm.CalculateDistance();
oDijkstraAlgorithm.Output();
getch();
}