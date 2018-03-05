#include "CListGraph.h"

void CListGraph::AddEdge(int from, int to) {
    graph_out[from].push_back(to);
    graph_in[to].push_back(from);
}

int CListGraph::VerticesCount() const {
    return int(graph_in.size());
}

void CListGraph::GetNextVertices(int vertex, vector<int> &vertices) const {
    vertices = graph_out[vertex];
};

void CListGraph::GetPrevVertices(int vertex, vector<int> &vertices) const {
    vertices = graph_in[vertex];
};