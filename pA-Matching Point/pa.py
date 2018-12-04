


# with open("1.in") as f:
#
#     for line in f.readlines():
#         s,t =line.strip().split()
#         print(s,t)
# https://www.geeksforgeeks.org/print-subsequences-string/

def permute(a, i,n):

    if i==n:
        print(a)
    else:
        for j in range(i,n):
            a[i],a[j] = a[j],a[i]
            permute(a,i+1,n)
            a[i],a[j] = a[j],a[i]


permute(list(range(10)),0,10)
