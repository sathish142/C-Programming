a=[]
n=int(input())
for i in range(0,n):
    b=input()
    a.append(b)
for i in range(0,n):
    if a[i]==i:
        print a[i]
        break
