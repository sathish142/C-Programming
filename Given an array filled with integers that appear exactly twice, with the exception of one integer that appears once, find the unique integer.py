a=[]
n=int(input())
for i in range(0,n):
    b=input()
    a.append(b)
for i in range(0,n):
    for j in range(i+1,n):
        if(a[i]==a[j]):
            a[i]=0
            a[j]=0
for i in range(0,n):
    if(a[i]!=0):
        print a[i]
