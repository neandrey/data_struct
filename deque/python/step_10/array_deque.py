data = list(map(int, input().split()))

lifo = [i for i in data]

try:
    for i in range(2):
        print(lifo.pop(), end=' ')
except IndexError as e:
    print(e)
