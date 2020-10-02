def cuentaRegresiva(a):
	b = []
	for i in range(a,-1,-1):
		b.append(i)
	return b

def print_and_return(a):
    print(a[0])
    return a[1]

def first_plus_lenght(a):
    return (a[0] + len(a))

def values_greater_than_second(a):
    if len(a) < 2:
        return false
    else:
        b = []
        for x in a:
            if x > a[1]:
                b.append(x)
        return b

def lenght_and_value(a,b):
    c = []
    for x in range(a):
        c.append(b)
    return c
    
def biggie_size(a):
    for x in range(len(a)):
        if a[x] > 0:
            a[x] = 'big'

def count_positives(a):
    b = 0
    for i in range(len(a)):
        if a[i] > 0:
            b += 1
    a[len(a)-1] = b

def sum_total(a):
    b = 0
    for i in range(len(a)):
        b += a[i]
    return b

def prom(a):
    return sum_total(a)/len(a)
    
def lenght(a):
    return len(a)
    
def min(a):
    if len(a) > 0:
        b = a[0]
        for x in range(len(a)):
            if a[x] < b:
                b = a[x]
        return b
    else:
        return false

def max(a):
    if len(a) > 0:
        b = a[0]
        for x in range(len(a)):
            if a[x] > b:
                b = a[x]
        return b
    else:
        return false

def ultimate_analysis(a):
    return {'suma total':sum_total(a),'promedio':prom(a),'minimo':min(a),'maximo':max(a),'longitud':lenght(a)}

def reverse_list(a):
    i = 0
    j = len(a)-1
    while i<j:
        a[i],a[j] = a[j],a[i]
        i += 1
        j -= 1
    return a


