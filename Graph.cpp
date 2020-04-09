#include <iostream>
#include <vector>

class Graph
{
private:
    int vertix;
    std::vector<std::vector<int>> adjlist;

public:
    Graph(int v);
    void addEdge(int u, int v)
    {
        adjlist[u].push_back(v);
     //   adjlist[v].push_back(u); // Comment For Directed Graph
    }
    void Print()
    {
        int i{0};
        for(auto element : adjlist)
        {
            std::cout << "HEAD ->" << i << "->";
            for(auto vertix : element)
            {
                std::cout << vertix << " ";
            }
            ++i;
            std::cout << std::endl;
        }
    }
};

Graph::Graph(int v)
{
    vertix = v;
    adjlist.resize(vertix);
}


int main()
{
    /*
    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(4,6);
    g.addEdge(6,5);
    g.Print();
*/

Graph g(5);
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(2,4);
g.addEdge(4,2);
g.addEdge(2,3);
g.addEdge(3,0);
g.Print();

    return 0;
}