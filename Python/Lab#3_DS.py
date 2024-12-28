import itertools

def factorial(n):
    f = 1
    for i in range(1, n+1):
        f *= i
    return f

def series(A, X, n):
    for i in range(n+1):
        coefficient = len(list(itertools.combinations(range(n), i)))
        a_pow = A ** (n - i)
        x_pow = X ** i
        term = int((coefficient * a_pow * x_pow) / (factorial(n-i)) * factorial(i))
        print(term, end=" ")

print("Enter X value: ")
A = int(input())
print("Enter Y value: ")
X = int(input())
print("Enter n value: ")
n = int(input())

series(A, X, n)
