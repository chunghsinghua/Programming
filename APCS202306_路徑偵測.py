# 0:e ; 1:s ; 2:w ; e:n
n = int(input())
predir = 0
le = ri = rev = 0
prex, prey = map(int, input().split())
for i in range(1, n):
    x, y = map(int, input().split())
    if x > prex:
        dir = 0
    elif y < prey:
        dir = 1
    elif x < prex:
        dir = 2
    else:
        dir = 3

    checkdir = (dir-predir) % 4
    if checkdir == 1:
        ri += 1
    elif checkdir % 4 == 2:
        rev += 1
    elif checkdir % 4 == 3:
        le += 1

    predir, prex, prey = dir, x, y

print(le, ri, rev)
