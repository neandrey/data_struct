from collections import deque

data = list(map(int, input().split()))

buff = deque((), maxlen=10)

for i in data:
    buff.appendleft(i)

print()
for i in range(3):
    print(buff.pop(), end=' ')
print()
