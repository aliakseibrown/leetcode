class MyHashSet:
    def __init__(self, capacity = 2):
        self.capacity = capacity
        self.set = [None] * self.capacity

    def hash(self, key):
        return key % self.capacity

    def add(self, key: int) -> None:
        index = self.hash(key)
        if self.set[index] == None:
            self.set[index] = [key]
        else:
            self.set[index].append(key)

    def remove(self, key: int) -> None:
        index = self.hash(key)
        if self.set[index] != None:
            while key in self.set[index]:
                self.set[index].remove(key)
        
    def contains(self, key: int) -> bool:
        index = self.hash(key)
        if self.set[index] != None:
            return key in self.set[index]
        return False

# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)
