x,n=map(int,input().split())
p = [int(v) for v in input().split()]
lenum = rinum = 0
mn = 101
mx = -101
for i in p:
    if i < x:
        lenum += 1
        mn = min(mn,i)
    else:
        rinum += 1
        mx = max(mx,i)
if lenum > rinum:
    print(lenum,mn)
else:
    print(rinum,mx)
