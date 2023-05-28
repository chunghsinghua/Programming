n = int(input())
res = []
mn = 26
for _ in range(n):
    s = input()
    t = set(s)
    leng = len(t)
    if leng < mn:
        res.clear()
        res.append(s)
        mn = leng
    elif leng == mn:
        res.append(s)

res.sort()
print(res[0])
