v1,v2,v3=map(int,input().split())
if v1>v2 and v1>v3:
    print(v1)
elif v2>v1 and v2>v3:
    print(v2)
else:
    print(v3)
