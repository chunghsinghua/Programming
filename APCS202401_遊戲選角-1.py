n=int(input())
_list = [[0,0] for _ in range(n)]
for i in range(n):
    _list[i][0], _list[i][1] = map(int,input().split())
_list.sort(key=lambda x:x[0]**2+x[1]**2)
print(*_list[-2])
