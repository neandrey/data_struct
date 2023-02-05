from collections import deque

data = list(map(int, input().split()))

lifo = deque()

for i in data:
    lifo.append(i)

print()
for i in range(3):
    print(lifo.pop(), end=' ')
print()
