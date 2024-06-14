n = int(input("n: "))
l1 = [int(input()) for _ in range(n)]
b = []

for i in l1:
    if i in b:
        print(f"index: {l1.index(i)}")
    else:
        b.append(i)
