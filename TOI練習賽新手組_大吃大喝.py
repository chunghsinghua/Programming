n,m,k= map(int,input().split())
food = ["eats an Apple pie","drinks a Corn soup"]
foodmoney = [32,55]
idx = 0
if n <foodmoney[k]:
    print("Wayne can't eat and drink.")
while n >= foodmoney[k]:
    n-=foodmoney[k]
    if n == 0:
        mstring = "doesn't have money."
    elif n==1:
        mstring = "has 1 dollar."
    else:
        mstring = f"has {n} dollars."
    print(f"{m*idx}: Wayne {food[k]}, and now he {mstring}")
    idx+=1
    k+=1
    k%=2
