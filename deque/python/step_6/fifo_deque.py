from collections import deque

data = list(map(int, input().split()))

fifo = deque()

for i in data:
    fifo.appendleft(i)

print()
for i in range(3):
    print(fifo.pop(), end=' ')
print()
