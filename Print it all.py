while True:
    n = int(input())
    if n == 0:
        break
    ans =""
    for i in range(1,n):
        if i%7!=0:
            ans += str(i)
            ans += ' '
    print(ans)
