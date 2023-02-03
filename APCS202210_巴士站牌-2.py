n = int(input())
a = [tuple(map(int, input().split())) for _ in range(n)]
mn = 500
mx = -1
for i in range(n-1):
    t = abs(a[i][0]-a[i+1][0])+abs(a[i][1]-a[i+1][1])
    mn = min(mn, t)
    mx = max(mx, t)
print(mx, mn)
