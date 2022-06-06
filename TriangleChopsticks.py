t = int(input())
a,b,r = map(int,input().split())
n = int(input())
l = list(map(int,input().split()))
dum = a+b
count = 0
for i in range(t):
    for i in l:
        if i<dum:
            count+=1
print(count)
print(("Grey","Natsu") [count > r])