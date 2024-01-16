class RandomizedSet:

    def __init__(self):
        self.a = []
        self.d = {}

    def insert(self, val: int) -> bool:
        if val in self.d:
            return False
        self.d[val] = 1
        self.a.append(val)
        return True

    def remove(self, val: int) -> bool:
        if val in self.d:
            self.d.pop(val)
            self.a.remove(val)
            return True
        else:
            return False


    def getRandom(self) -> int:
        return random.choice(self.a)


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
