
def Gray_Code(n,m):
    Bin=bin(n)[2:]
    res=""
    res+=Bin[0]
    for i in range(1,len(Bin)):
        res+=str(int(Bin[i-1])^int(Bin[i]))
    k=""
    if len(res)<m:
        for i in range(0,m-len(res)):
            k+='0'
    return k+res
n=int(input())
total=2**n
for i in range(0,total):
    print(Gray_Code(i,n))