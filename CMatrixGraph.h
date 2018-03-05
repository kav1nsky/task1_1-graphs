#ifndef GRAPHS_CMATRIXGRAPH_H
#define GRAPHS_CMATRIXGRAPH_H
#endif //GRAPHS_CMATRIXGRAPH_H

#include "IGraph.h"

using namespace std;

class CMatrixGraph : IGraph {
private:
    vector<vector<bool>> g;
public:
    void AddEdge(int from, int to);

    int VerticesCount() const;

    void GetNextVertices(int vertex, vector<int> &vertices) const;

    void GetPrevVertices(int vertex, vector<int> &vertices) const;
};