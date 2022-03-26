n,d = map(int,input().split())
cnt = 0; total = 0
for _ in range(n):
    t=[int(x) for x in input().split()]
    if (max(t)-min(t))>=d:
        cnt+=1
        total += sum(t)//3

print(cnt,total)
