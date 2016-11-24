#include "graph.h"

using namespace std;

Graph::Graph(const vector<int> starts, const vector<int> ends){
    if(starts.size()!=ends.size()){throw invalid_argument("los vectores son de diferente tamanio");
    }
    for(int i = 0; i<starts.size();i++){
        nodes[starts[i]].push_back(ends[i]);
    }
}
int Graph::numOutGoing(const int nodeID)const{
    return (nodes.find(nodeID))->second.size();
}
const vector<int> &Graph::adjacent(const int nodeID){
    return (nodes.find(nodeID))->second;
}


int main()
{
    vector<int> s,t;

    s.push_back(1);
    s.push_back(1);
    s.push_back(1);
    s.push_back(5);
    s.push_back(5);
    s.push_back(4);


    t.push_back(2);
    t.push_back(3);
    t.push_back(4);
    t.push_back(4);
    t.push_back(2);
    t.push_back(2);

    Graph g(t,s);
    cout<<g.numOutGoing(4)<<endl;

    const vector<int> ad= g.adjacent(2);

    for(int i = 0; i<ad.size(); i++){
        std::cout<<ad[i]<<endl;
    }
    return 0;
}
