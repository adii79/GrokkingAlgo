#include<iostream>

    std::unordered_map<const char* , std::unordered_map<const char* , float>> graph;
    std::unordered_map<const char* , const char*> parent;
    std::unordered_map<const char* , float> costs;
    std::vector<const char*> processed;


    bool isProcessed(const char* name) {
    for (int i = 0; i < processed.size(); ++i) {
        if (strcmp(processed[i], name) == 0) {
            return false;
        }
    }
    return true;
};

    const char* lowestCostNode( std::unordered_map<const char* , float> costs){
        float lowest_cost = INFINITY;
        const char* lowest_cost_node = nullptr;
        for(const auto& node: costs){
            const char* node1 = node.first;
            int cost = costs[node1];
            if(cost < lowest_cost && isProcessed(node1)){
                lowest_cost = cost;
                lowest_cost_node = node1;
            }

        }
        return lowest_cost_node;
    };

    void dijkstrasAlgo(){
        const char* node = lowestCostNode(costs);
        while (node != nullptr)
        {
            float cost = costs[node];
            std::unordered_map<const char*, float> neighbors = graph[node];
            for(const auto& ne : neighbors){
                const char* n = ne.first;
                float new_cost = cost + ne.second;
                if(costs[n]>new_cost){
                    costs[n] = new_cost;
                    parent[n] = node;
                }
            }
            processed.push_back(node);
            node = lowestCostNode(costs);
        }

        
    };




int main(){


    // std::unordered_map<const char* , std::unordered_map<const char* , float>> graph;
    graph["start"] = {};
    graph["start"]["a"] = {6.0};
    graph["start"]["b"] = {2.0};

    graph["a"] = {};
    graph["a"]["Fin"] = {1};
    
    graph["b"] = {};
    graph["b"]["a"] = {3};
    graph["b"]["Fin"] = {5};


    // std::unordered_map<const char* , const char*> parent;
    parent["a"] = "start";
    parent["b"] = "start";
    parent["Fin"] = nullptr;

    // std::unordered_map<const char* , float> costs;
    costs["a"]=6.0;
    costs["b"]=2.0;
    costs["Fin"]= INFINITY;
    std::cout<<costs["Fin"]<<std::endl;



    std::cout<<graph["start"].size()<<std::endl;


    for (auto& [node, neigh] : graph) {
        std::cout << node << ": ";
        for (auto& [to, w] : neigh) {
            std::cout << to << "(" << w << ") ";
        }
        std::cout << "\n";
    }


    // processed.push_back("adi");
    // processed.erase(processed.begin()+1);
    // std::cout<<processed[0]<<std::endl;


    // std::cout<<lowestCostNode(costs);

std::cout<<"cost before djikstras\n";
std::cout<<"costs => ";
    for(const auto& n: costs){
        const char* name = n.first;
        float value = n.second;
        std::cout<<name<<":"<<value<<" ";
    }
std::cout<<"\n";

std::cout << "parents before dijkstras\n";
for (const auto& p : parent) {
    std::cout << p.first << " <- " << (p.second ? p.second : "nil") << "\n";
}



    std::cout<<"++++++++++++++++++++++++++++++++\n";

    dijkstrasAlgo();

    std::cout<<"cost before djikstras\n";
std::cout<<"costs => ";
    for(const auto& n: costs){
        const char* name = n.first;
        float value = n.second;
        std::cout<<name<<":"<<value<<" ";
    }
std::cout<<"\n";


std::cout << "parents after dijkstras\n";
for (const auto& p : parent) {
    std::cout << p.first << " <- " << (p.second ? p.second : "nil") << "\n";
}


    


}