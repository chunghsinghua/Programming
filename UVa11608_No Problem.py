q = 1
while True:
    a = [int(input())]
    if a[0]==-1:
        break
    a += [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    print(f"Case {q}:")
    q+=1
    r = 0
    for i in range(12):
        r = r+a[i]
        if r>=b[i]:
            print("No problem! :D")
            r-=b[i]
        else:
            print("No problem. :(")
