a=[1,2,5,7,8,9,10]

res=0

for i in range(0, len(a), 2):
    if(a[i]%2==0) or (a[i]<2):
        res=res+1

print(res)
