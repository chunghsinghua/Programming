n = int(input())
res = []
mn = 26
for _ in range(n):
    s = input()
    cnt = 1
    ss = sorted(s)
    for idx in range(1, len(s)):
        if ss[idx] != ss[idx-1]:
            cnt += 1
    if cnt < mn:
        res.clear()
        res.append(s)
        mn = cnt
    elif cnt == mn:
        res.append(s)

res.sort()
print(res[0])
