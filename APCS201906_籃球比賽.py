awin = 0
for _ in range(2):
    a = sum(list(map(int, input().split())))
    b = sum(list(map(int, input().split())))
    print(f"{a}:{b}")
    if a > b:
        awin += 1
if awin == 2:
    print("Win")
elif awin == 0:
    print("Lose")
else:
    print("Tie")
