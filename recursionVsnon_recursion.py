class Box:
    def __init__(self):
        self.items = []

    def add_item(self, item):
        self.items.append(item)

    def is_a_box(self):
        return True  # It's a box by definition

    def make_a_pile_to_look_through(self):
        return self.items.copy()  # returns a copy of the items as a pile

    def __iter__(self):
        return iter(self.items)


class Key:
    def is_a_key(self):
        return True
    def is_a_box(self):
        return False


mainbox = Box()
innerbox = Box()
deepBox = Box()

deepBox.add_item(Key())
innerbox.add_item(deepBox)
mainbox.add_item(innerbox)




def look_for_key_non_recursive(box):
    pile = box.make_a_pile_to_look_through()
    while pile:
        item = pile.pop()
        if isinstance(item, Box):
            pile.extend(item.make_a_pile_to_look_through())
        elif isinstance(item, Key):
            print("Found the key!")
            return


look_for_key_non_recursive(mainbox)


def recursion(Box):
    for item in Box:
        if item.is_a_box():
            recursion(item)
        elif item.is_a_key():
            print("found key ! ;)")

recursion(mainbox)

def countdown(i):
    print(i)
    countdown(i-1)

# countdown(30)   // infinite loop


# BASE CASE / RECUSIVE CASE

def countdownBR(i):
    print(i)
    if i <= 0:   #<<-- Base case 
        return
    else:         #<<--- recursive case
        countdownBR(i-1)

countdownBR(4)