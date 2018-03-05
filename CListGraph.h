#ifndef GRAPHS_CLISTGRAPH_H
#define GRAPHS_CLISTGRAPH_H
#endif //GRAPHS_CLISTGRAPH_H

#include "IGraph.h"

class CListGraph:IGraph{
private:
    vector<vector<int>> graph_out;
    vector<vector<int>> graph_in;
public:
    void AddEdge(int from, int to){
        graph_out[from].push_back(to);
        graph_in[to].push_back(from);
    }

    int VerticesCount() const{
        return int(graph_in.size());
    }

    void GetNextVertices(int vertex, vector<int>& vertices) const{
        vertices = graph_out[vertex];
    };

    void GetPrevVertices(int vertex, vector<int>& vertices) const {
        vertices = graph_in[vertex];
    };

};