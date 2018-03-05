#include "CArcGraph.h"

void CArcGraph::AddEdge(int from, int to) {
    g.push_back(make_pair(from, to));
}

int CArcGraph::VerticesCount() const {
    return int(g.size());
}

void CArcGraph::GetNextVertices(int vertex, vector<int> &vertices) const {
    for (int i = 0; i < g.size(); ++i) {
        if (g[i].first == vertex) {
            vertices.push_back(g[i].second);
        }
    }
};

void CArcGraph::GetPrevVertices(int vertex, vector<int> &vertices) const {
    for (int i = 0; i < g.size(); ++i) {
        if (g[i].second == vertex) {
            vertices.push_back(g[i].first);
        }
    }
};