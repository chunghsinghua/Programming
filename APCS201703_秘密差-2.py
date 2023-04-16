s = 0
for i, x in enumerate(input()):
    if i & 1:
        s += int(x)
    else:
        s -= int(x)

print(abs(s))
