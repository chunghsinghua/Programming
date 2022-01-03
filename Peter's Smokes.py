while True:
    try:
        n,k = map(int,input().split())
        ans = n
        while n>=k:
            n -=k
            n +=1
            ans += 1
        print(ans)
    except:
        break
