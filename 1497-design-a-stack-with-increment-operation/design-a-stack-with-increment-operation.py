class CustomStack:

    def __init__(self, maxSize: int):
        self.maxSize =maxSize
        self.stack=[]
        self.inc=[]
        

    def push(self, x: int) -> None:
        if len(self.stack) < self.maxSize:
            self.stack.append(x)
            self.inc.append(0)
        

    def pop(self) -> int:
        if not self.stack:
            return -1
        index=len(self.stack)-1
        if index > 0:
            self.inc[index-1]+=self.inc[index]
        value =self.stack.pop()+ self.inc.pop()
        return value
           

    def increment(self, k: int, val: int) -> None:
        if self.stack:
            index=min(k,len(self.stack))-1
            self.inc[index]+=val
        


# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)