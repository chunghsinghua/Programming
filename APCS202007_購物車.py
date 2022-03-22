a, b = map(int, input().split())
n = int(input())
total = 0
for i in range(n):
    t = list(map(int, input().split()))
    acount = t.count(a)-t.count(-a)
    bcount = t.count(b)-t.count(-b)
    if acount > 0 and bcount > 0:
        total += 1
print(total)
