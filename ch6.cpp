// see the queue.cpp for the manual queue defination

#include<iostream>
#include<queue>

struct  node
{
    const char* name;
    std::vector<const char*> neighbors;
};

bool personIsSeller(const char* name){
    int len = strlen(name);
    return len > 0 && name[len-1] == 'm';
};

bool isSearched(std::vector<const char*>& searched , const char* name ){
    for( const char* s: searched){
        if(strcmp(s,name)==0){
            return true;
        }
    }
     return false;
}

// Breadth first search
void search(const char* name,   std::vector<node> graph){
    std::vector<const char*> searchQueue;
   std::vector<const char*> searched;

   // add name and neighbor queue to search queue
   for(const node& n: graph){
    if(strcmp(n.name,name) == 0 ){
        for(const char* neighbor: n.neighbors){
            searchQueue.push_back(neighbor);
        }
    }
   }
   int front = 0;
   while (searchQueue.size() > front)
   {
    const char* person = searchQueue[front++];
    if(!isSearched(searched,person)){
        if(personIsSeller(person)){
            std::cout<<person<<" is a mango seller!\n";
             return ;
        }
       
    }
    for(const node& n: graph){
        if(strcmp(n.name,person)==0){
            for(const char* neighbors: n.neighbors){
                searchQueue.push_back(neighbors);
            }
            break;
        }
    }
    searched.push_back(person);



   }
   std::cout<<"no mango seller found in your network";
};








int main(){

   std::vector<node> graph;
   
   graph.push_back({"you",{"alice","bob","claire"}});
//    graph.push_back({"you",{"alice","bob","clairem"}});
   graph.push_back({"bob",{"anuj","peggy"}});
   graph.push_back({"alice",{"peggy"}});
   graph.push_back({"claire",{"thom","jonny"}});
   graph.push_back({"anuj",{}});
   graph.push_back({"peggy",{}});
   graph.push_back({"jonny",{}});
//    graph.push_back({"thom",{}});
   

   for(const node& n : graph){
    std::cout<<n.name<<std::endl;
   }


   for (const node& n : graph) {
        std::cout << n.name << " -> ";
        for (const std::string& neighbor : n.neighbors) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }

   
    std::cout<<personIsSeller("adim")<<std::endl;
    std::cout<<personIsSeller("adimo")<<std::endl;

    search("you",graph);
    


}