#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<queue>
typedef int VertexType;
using namespace std;
#define MAXVEX 20
bool visited[MAXVEX];
//�߱��� 
typedef struct EdgeNode{
    int adjvex;
    struct EdgeNode *next;
}EdgeNode;

//�������
typedef struct VertexNode{
    VertexType data;
    EdgeNode *firstedge;
}VertexNode,AdjList[MAXVEX];

typedef struct{
    AdjList vertices;
    int numVertexes,numEdges;
}GraphAdjList;

//   �ڽӱ���ͼ�����ã�.cpp 
//[Error] base operand of '->' has non-pointer type 'GraphAdjList'
//����ṹ�����GraphAdjListû�� -> 
//*/

//#pragma once
////#pragma once��һ���Ƚϳ��õ�C/C++��ע��
////ֻҪ��ͷ�ļ����ʼ����������ע��
////���ܹ���֤ͷ�ļ�ֻ������һ�Ρ�
