times = 1
while True:
    n = int(input())
    if n == 0:
        break
    data = list(map(int,input().split()))
    summ = sum(data)
    ref = summ // n
    ans = 0
    for i in data:
        if i > ref:
            ans += i-ref
    print("Set #{}\nThe minimum number of moves is {}.".format(times,ans))
    times += 1
