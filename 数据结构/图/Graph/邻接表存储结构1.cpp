#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<queue>
typedef char VertexType;
using namespace std;
#define MAXVEX 20
bool visited[MAXVEX];
//边表结点 
typedef struct EdgeNode{
    int adjvex;
    struct EdgeNode *next;
}EdgeNode;

//顶点表结点
typedef struct VertexNode{
    VertexType data;
    EdgeNode *firstedge;
}VertexNode,AdjList[MAXVEX];

typedef struct{
    AdjList adjlist;
    int numVertexes,numEdges;
}GraphAdjList;


