#include <stdio.h>
#include <stdlib.h>
#define V 5

int minWeight(int weight[], bool mstSet[]) {

    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && weight[v] < min)
            min = weight[v], min_index = v;
    return min_index;
}

int printMST(int parent[], int graph[V][V]){
    printf("Edge\tWeight\n");
    for(int i=0;i<V;i++){
        printf("%d--%d\t%d\n", parent[i], graph[parent[i]][i]);
    }
}

void prims(int graph[V][V]){

}


