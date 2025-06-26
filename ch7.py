graph = {}
graph["start"] = {}
graph["start"]["a"] = 6
graph["start"]["b"] = 2  #{'start': {'a': 6, 'b': 2}}
graph["a"] = {}
graph["a"]["Fin"] = 1
graph["b"] = {}
graph["b"]["a"] = 3
graph["b"]["Fin"] = 5
graph["Fin"] = {} #{'start': {'a': 6, 'b': 2}, 'a': {'Fin': 1}, 'b': {'a': 3, 'Fin': 5}, 'Fin': {}}

#code to make the hash table for the parents
parent = {}
parent["a"] = "start"
parent["b"] = "start"
parent["Fin"] = None


# costs table
costs = {}
costs["a"] = 6
costs["b"] = 2
costs["Fin"] = float("inf")
print(costs)

print(parent)
processed = []



print(graph)
print(graph["start"].keys())  #dict_keys(['a', 'b']
print(graph["start"]["a"])

def lowest_cost_node(costs):
    lowest_cost = float("inf")
    lowest_cost_node = None
    for node in costs:
        cost = costs[node]
        if cost < lowest_cost and node not in processed:
            lowest_cost = cost
            lowest_cost_node = node
    return lowest_cost_node


def dijkstrasAlgo():
    node = lowest_cost_node(costs)
    while node is not None:
        cost = costs[node]
        neighbors = graph[node]
        for n in neighbors.keys():
            new_cost = cost + neighbors[n] # cost of B + the cost of B -> A 
            if costs[n] > new_cost:
                costs[n] = new_cost
                parent[n] = node
        processed.append(node)
        node = lowest_cost_node(costs)
    return costs, parent


print(dijkstrasAlgo())

