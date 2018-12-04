def permute(a, i,n):

    if i==n:
        print(a)
    else:
        for j in range(i,n):
            a[i],a[j] = a[j],a[i]
            permute(a,i+1,n)
            a[i],a[j] = a[j],a[i]


permute(list(range(4)),0,4)