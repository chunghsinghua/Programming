data = [0]*10
idx = [int(x) for x in input().split()]
for i in idx:
    data[i]+=1

output=[max(data)]
for i in range(len(data)-1,0,-1):
    if data[i]>0 : 
        output.append(i)

print(*output)
