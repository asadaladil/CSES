def Tower_of_Hanoi(n,a,b,c):
    if n==1:
        print(f"{a} {c}")
        return
    Tower_of_Hanoi(n-1,a,c,b)
    print(f"{a} {c}")
    Tower_of_Hanoi(n-1,b,a,c)

n=int(input())
print(2**n-1)
Tower_of_Hanoi(n,'1','2','3')