while True:
    try:
        data = list(map(int, input().split()))
        s = sum(data[1:])
        aver = s/data[0]
        if aver > 59:
            print("no")
        else:
            print("yes")
    except:
        break
