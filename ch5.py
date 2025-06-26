
book = dict() #dictionary a hash map 
book["apple"] = 0.67
book["avacado"] = 1.49

print(book["avacado"])

# phone_bool = dict()

phone_book = {}
phone_book["jenny"] = 8675309
phone_book["emergency"] = 911
print(phone_book["emergency"]," ",phone_book["jenny"])

pb = phone_book.get("jenny")
print(pb)


voted = {}

def check_if_voted(name):
    if voted.get(name):
        return "kick them out!"
    voted[name] = True
    return "let them vote"

print(check_if_voted("adi"))
print(check_if_voted("radha"))
print(check_if_voted("adi"))
    
cache = {}

def get_page(url):
    if cache.get(url):
        return cache[url]
    data = get_data_from_server(url)
    cache[url] = data
    return data



def get_data_from_server(url):
    return 0;



random = {}
random["one"] = 1
print(random)
random["one2"] = 1 #Collision
print(random)
random["one2"] = 2 #Collision. this changes the value
print(random)