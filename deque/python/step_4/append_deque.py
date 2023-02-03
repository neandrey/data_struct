from collections import deque

lst_in = list(map(int, input().split()))

q = deque()

for i in lst_in:
    q.append(i)

print()
for i in range(3):
    print(q.popleft(), end = ' ')
