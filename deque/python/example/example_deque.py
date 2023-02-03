from collections import deque

dq = deque([1, 2, 3, 4, 5])

#FIFO
dq.appendleft(10)
value = dq.pop()

dq.append(10)
value = dq.popleft()


#LIFO

dq.append(55)
value = dq.pop()

dq.appendleft(55)
value = dq.popleft()
