from collections import deque


graph = {}
graph["you"] = ["alice", "bob", "claire"]
graph["bob"] = ["anuj", "peggy"]
graph["alice"] = ["peggy"]
graph["claire"] = ["thom", "jonny"]
graph["anuj"] = []
graph["peggy"] = []
graph["thom"] = []
graph["jonny"] = []

def person_is_seller(name):
    return name[-1] == 'm'  # Use straight quotes

def search(you,graph1):
    search_queue = deque() #creates a new queue
    search_queue += graph1[you]
    searched = []  # To keep track of already-searched people

    while search_queue:
        person = search_queue.popleft()
        if person not in searched:  # Prevent infinite loops
            if person_is_seller(person):
                print(person + " is a mango seller!")
                return True
            else:
                search_queue += graph[person]
                searched.append(person)
    return False

search("you",graph)