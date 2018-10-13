n,k=input().split()
n=int(n)
k=int(k)
a=[]
a = [int(x) for x in input().split()]
sum=0
while(k!=0):
    sum+=a[k-1]
    k-=1
print(sum)
