def bin_dec(n):
    binary = []
    while n>0:
        binary.append(n%2)
        n = n//2
    binary.reverse()
    for i in range(len(binary)):
        print(binary.pop())

n = int(input("enter n"))
bin_dec(n)