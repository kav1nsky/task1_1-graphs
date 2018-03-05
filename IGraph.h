#ifndef GRAPHS_IGRAPH_H
#define GRAPHS_IGRAPH_H
#endif //GRAPHS_IGRAPH_H

#include <vector>
#include <set>
using namespace std;

class IGraph {
public:
    virtual ~IGraph() {}

    virtual void AddEdge(int from, int to) = 0;

    virtual int VerticesCount() const  = 0;

    virtual void GetNextVertices(int vertex, std::vector<int>& vertices) const = 0;
    virtual void GetPrevVertices(int vertex, std::vector<int>& vertices) const = 0;


};