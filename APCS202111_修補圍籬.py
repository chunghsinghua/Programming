n = int(input())
data = [200]+[int(x) for x in input().split()]+[200]
ans = 0
for i in range(1,n+1):
    if data[i]==0:
        ans += min(data[i-1],data[i+1])

print(ans)
