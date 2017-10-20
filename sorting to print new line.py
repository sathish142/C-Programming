a=[]
n=int(input())
for i in range(0,n):
    b=input()
    a.append(b)
for i in range(0,n):
    for j in range(i+1,n):
        if(a[i]<a[j]):
            t=a[j]
            a[j]=a[i]
            a[i]=t
for i in range(0,n):
    print (a[i])
