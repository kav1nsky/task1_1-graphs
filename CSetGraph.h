#ifndef GRAPHS_CSETGRAPH_H
#define GRAPHS_CSETGRAPH_H
#endif //GRAPHS_CSETGRAPH_H


#include "IGraph.h"

using namespace std;

class CSetGraph:IGraph {
private:
    vector<set<int>> graph_out;
    vector<set<int>> graph_in;
public:
    void AddEdge(int from, int to);

    int VerticesCount() const;

    void GetNextVertices(int vertex, vector<int> &vertices) const;

    void GetPrevVertices(int vertex, vector<int> &vertices) const;
};