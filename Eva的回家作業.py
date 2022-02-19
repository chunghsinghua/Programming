t = int(input())
for _ in range(t):
    temp = list(map(int,input().split()))
    if temp[1]-temp[0]==temp[2]-temp[1]:
        temp.append(temp[-1]+temp[1]-temp[0])
    else:
        temp.append(temp[-1]*(temp[1]//temp[0]))
    print(*temp)
