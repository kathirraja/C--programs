#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class FloydsWarshallAlgorithm
{
int mNoOfNodes;
int mPathMatrix[10][10];
int mAdjacencyMatrix[10][10];
int mGraphCost[10][10];
public:
void ReadGraph();
void PathMatrix();
void Algorithm();
void Display();
};
void FloydsWarshallAlgorithm::ReadGraph()
{
int i, j, k;
cout << "*********Floyds-Warshall Algorithm ***********";
cout << "Enter the no. of nodes in the graph :";
cin >> mNoOfNodes;
cout << "Enter the adjacency matrix :";
for ( i = 1;i <= mNoOfNodes;i++ )
{
for ( j = 1;j <= mNoOfNodes;j++ )
{
cin >> mAdjacencyMatrix[i][j];
mPathMatrix[i][j] = 0;
}
}
cout << "Enter The cost matrix is :";
for ( i = 1;i <= mNoOfNodes;i++ )
{
for ( j = 1;j <= mNoOfNodes;j++ )
{
// cout<<"a["<<i<<","<<j<<"] = ";
cin >> mGraphCost[i][j];
}
}
for ( i = 1;i <= mNoOfNodes;i++ )
{
for ( j = 1;j <= mNoOfNodes;j++ )
{
mPathMatrix[i][j] = mAdjacencyMatrix[i][j];
}
}
}
void FloydsWarshallAlgorithm::Display()
{
for ( int i = 1;i <= mNoOfNodes;i++ )
{
for ( int j = 1;j <= mNoOfNodes;j++ )
{
cout << mPathMatrix[i][j] << " ";
}
cout << endl;
}
}
void FloydsWarshallAlgorithm::PathMatrix()
{
int i, j, k;
for ( k = 1;k <= mNoOfNodes;k++ )
{
for ( i = 1;i <= mNoOfNodes;i++ )
{
for ( j = 1;j <= mNoOfNodes;j++ )
{
mPathMatrix[i][j] = mPathMatrix[i][j] || mPathMatrix[i][k] && mPathMatrix[k][j];
}
}
}
}
void FloydsWarshallAlgorithm::Algorithm()
{
int i, j, k;
for ( i = 1;i <= mNoOfNodes;i++ )
{
for ( j = 1;j <= mNoOfNodes;j++ )
{
mPathMatrix[i][j] = mGraphCost[i][j];
}
}
for ( k = 1;k <= mNoOfNodes;k++ )
{
for ( i = 1;i <= mNoOfNodes;i++ )
{
for ( j = 1;j <= mNoOfNodes;j++ )
{
if ( mPathMatrix[i][j] < mPathMatrix[i][k] + mPathMatrix[k][j] )
{
mPathMatrix[i][j] = mPathMatrix[i][j];
}
else
{
mPathMatrix[i][j] = mPathMatrix[i][k] + mPathMatrix[k][j];
}
}
}
}
}
void main()
{
clrscr();
FloydsWarshallAlgorithm oFloydsWarshallAlgorithm;
oFloydsWarshallAlgorithm.ReadGraph();
oFloydsWarshallAlgorithm.PathMatrix();
cout << "Path matrix is :\n";
oFloydsWarshallAlgorithm.Display();
oFloydsWarshallAlgorithm.Algorithm();
cout << "All pair shortest path matrix is :\n";
oFloydsWarshallAlgorithm.Display();
getch();
}
