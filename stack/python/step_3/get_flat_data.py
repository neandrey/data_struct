from collections import deque

def get_flat_data(data):
    st = deque(data) 
    res = []
    while st:
        x = st.popleft()
        if type(x) == list:
            [st.append(i) for i in x]
        else:
            res.append(x)
    return res


data = [1, "abc", [[100, 200], 10, 20], [30, 40]]
res = get_flat_data(data)
#print(res)
