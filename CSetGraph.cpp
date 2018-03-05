#include "CSetGraph.h"

void CSetGraph::AddEdge(int from, int to) {
    graph_out[from].insert(to);
    graph_in[to].insert(from);
}

int CSetGraph::VerticesCount() const {
    return int(graph_in.size());
}

void CSetGraph::GetNextVertices(int vertex, vector<int> &vertices) const {
    vertices = vector<int>(graph_out[vertex].begin(), graph_out[vertex].end());
};

void CSetGraph::GetPrevVertices(int vertex, vector<int> &vertices) const {
    vertices = vector<int>(graph_out[vertex].end(), graph_out[vertex].begin());
};
};