d = {'one': 1, 'two': 2, 'natural': 1, 'True': 1, 'even': 2, 'three': 3, 'False': 0}  # этот словарь не менять

# здесь продолжайте программу
d_unique = {v: k for k, v in {v : k for k, v in d.items()}.items()}

print(d_unique)
