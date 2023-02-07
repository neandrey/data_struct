import sys
from collections import deque

lst_in = list(map(str.strip, sys.stdin.readlines()))

st = deque()

for i in lst_in:
    st.appendleft(i)

print(st.popleft())
