import sys

lst_in = list(map(str.strip, sys.stdin.readlines()))

st = list()

for i in lst_in:
    st.append(i)

print(st.pop())
