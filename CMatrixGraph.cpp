#include "CMatrixGraph.h"

void CMatrixGraph::AddEdge(int from, int to) {
    g[from][to] = true;
}

int CMatrixGraph::VerticesCount() const {
    return int(g.size());
}

void CMatrixGraph::GetNextVertices(int vertex, vector<int> &vertices) const {
    for (int i = 0; i < g.size(); ++i) {
        if (g[vertex][i]) {
            vertices.push_back(i);
        }
    }
};

void CMatrixGraph::GetPrevVertices(int vertex, vector<int> &vertices) const {
    for (int i = 0; i < g.size(); ++i) {
        if (g[i][vertex]) {
            vertices.push_back(i);
        }
    }
};