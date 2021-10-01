#include <stdio.h>

#define V 5
#define INT_MAX 99999
int minDistance(int dist[] , int sptSet[]){
    int min = INT_MAX , min_index ; 
    
    for(int v = 0 ; v < V ; v++){
        if(sptSet[v] == 0 && dist[v] <= min){
            min = dist[v] , min_index = v ; 
        }
    }
    return min_index; 
}

int printSolution(int dist[] , int n){
    printf("Vertex : \tdistance from source\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d \t :  \t%d\t\n" , i , dist[i]);
    }
}

void Dijkstra(int graph[V][V] , int src){
    int dist[V] ; 
    int sptSet[V] ; 
    
    for(int i = 0 ; i < V ; i++){
        dist[i] = INT_MAX , sptSet[i] = 0;
    }
    
    dist[src] = 0 ; 
    
    for(int count = 0 ; count < V-1 ; count++){
        int u = minDistance(dist , sptSet);
        sptSet[u] = 1 ; 
    
        for(int v = 0 ; v < V ; v++){
            if(!sptSet[v] && graph[u][v] && dist[u] != INT_MAX 
            && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
    printSolution(dist , V);
    
}

int main(){
    int graph[V][V] = {
        { 0,1,5,0,0},
        { 0,0,0,1,0},
        { 0,3,0,9,2},
        { 0,0,0,0,0},
        { 2,0,0,6,0}  };
    
    int startingVertex = 0 ; 
    printf("The shortest path from starting vertex : %d is as follows : \n" , startingVertex);
    Dijkstra(graph , startingVertex ) ; 
    return 0 ; 
}