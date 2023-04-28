n = int(input())
a = [int(x) for x in input().split()]
a.sort()
print(*a)
mn = 101
mx = -1
for s in a:
    if s >= 60:
        mn = min(s, mn)
    else:
        mx = max(s, mx)

if mx == -1:
    print("best case")
else:
    print(mx)

if mn == 101:
    print("worst case")
else:
    print(mn)
