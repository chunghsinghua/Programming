data = sorted({int(x) for x in input().split()}, reverse=True)
print(4-len(data), *data)
