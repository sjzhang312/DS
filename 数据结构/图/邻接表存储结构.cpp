#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<queue>
typedef int VertexType;
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
    AdjList vertices;
    int numVertexes,numEdges;
}GraphAdjList;

//   邻接表创建图（引用）.cpp 
//[Error] base operand of '->' has non-pointer type 'GraphAdjList'
//定义结构体里的GraphAdjList没有 -> 
//*/

//#pragma once
////#pragma once是一个比较常用的C/C++杂注，
////只要在头文件的最开始加入这条杂注，
////就能够保证头文件只被编译一次。
