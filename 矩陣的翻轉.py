while True:
    try:
        nm = list(map(int,input().split()))
        r = nm[0]
        c = nm[-1]
        mat = []
        for i in range(r):
            row = list(map(int,input().split()))
            mat.append(row)

        res = []
        for i in range(c):
            temp = ""
            for j in range(r):
                temp += str(mat[j][i]) + " "
            temp.rstrip()
            res.append(temp)
            
        for i in res:
            print(i)

    except:
        break
