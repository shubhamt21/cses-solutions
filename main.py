 
def permute(lst,a, l, r): 
    if l==r: 
        lst.append("".join(a)) 
    else: 
        for i in range(l,r+1): 
            a[l], a[i] = a[i], a[l] 
            permute(lst,a, l+1, r) 
            a[l], a[i] = a[i], a[l] 
    return lst


string = input()
lst=[]
n = len(string) 
a = list(string) 
lst=permute(lst,a, 0, n-1) 

lst=list(set(lst))
lst.sort()
print(len(lst))
print(*lst, sep="\n")

