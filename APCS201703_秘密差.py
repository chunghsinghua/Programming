d= [int(x) for x in input()]
odds =0 ; evens = 0
for i in range(len(d)):
    if i % 2 == 0:
        evens += d[i]
    else:
        odds += d[i]
print(abs(odds-evens))
