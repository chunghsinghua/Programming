n,d = map(int,input().split())
data=list(map(int,input().split()))
x = data[0]
y=-1
ans = 0
for i in range(1,len(data)):
    if x!=-1:
        if data[i]>=x+d:
            ans += data[i]-x
            x = -1
            y = data[i]
    else:
        if data[i]<=y-d:
            x = data[i]

print(ans)
