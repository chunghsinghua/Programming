s = [[0]*3]*6
s[0] = [0, 5, 2]  # draw,win,lose
s[2] = [2, 0, 5]  # draw,win,lose
s[5] = [5, 2, 0]  # draw,win,lose

f = int(input())
n = int(input())
sister = [int(x) for x in input().split()]
pre = -1

for idx, x in enumerate(sister, 1):
    print(f, end=' ')
    if f == s[x][1]:
        print(': Won at round', idx)
        exit()
    elif f == s[x][2]:
        print(': Lost at round', idx)
        exit()
    else:
        if x == pre:
            f = s[x][1]
        else:
            f = x
        pre = x
if idx == n:
    print(': Drew at round', idx)
