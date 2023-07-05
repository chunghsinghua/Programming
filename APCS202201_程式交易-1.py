n, d = map(int, input().split())
data = [int(x) for x in input().split()]
h = profits = 0
pre = 10000
for x in data:
    if h > 0 and x >= h+d:
        profits += x-h
        h = 0
        pre = x
    elif h == 0 and x <= pre-d:
        h = x

print(profits)
