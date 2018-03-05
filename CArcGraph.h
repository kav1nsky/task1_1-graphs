#ifndef GRAPHS_CARCGRAPH_H
#define GRAPHS_CARCGRAPH_H
#endif //GRAPHS_CARCGRAPH_H

#include "IGraph.h"

using namespace std;

class CArcGraph : IGraph {
private:
    vector<pair<int, int>> g;

public:
    void AddEdge(int from, int to);

    int VerticesCount() const;

    void GetNextVertices(int vertex, vector<int> &vertices) const;

    void GetPrevVertices(int vertex, vector<int> &vertices) const;
};