import sys
from collections import deque

lst_in = list(map(str.strip, sys.stdin.readlines()))

back_url = deque((), maxlen=20)

for i in lst_in:
    back_url.append(i)

try:
    print(back_url.pop(), end=' ')
except IndexError as e:
    print(e)
print()
