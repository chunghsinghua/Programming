n = int(input())
data = [110]+[int(x) for x in input().split()]+[110]
total = 0
for i in range(len(data)):
    if data[i] == 0:
        total += min(data[i-1], data[i+1])

print(total)
