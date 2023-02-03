n = int(input())
time = 0
mx = -10
ecnt = 0
for _ in range(n):
    t, s = map(int, input().split())
    if s > mx:
        mx = s
        time = t
    if s == -1:
        ecnt += 1

total = mx-n-ecnt*2
if total < 0:
    total = 0
print(total, time)
