from collections import deque

lst_in = list(map(str.strip, input().split()))

q = deque()

for i in lst_in:
    q.append(i)

try:
    q.insert(2, 'run')
except ValueError as e:
    print(e)

try:
    q.remove('edit')
except ValueError as e:
    print(e)
