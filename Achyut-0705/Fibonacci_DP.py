val = dict()
def fibonacci(n):
    global val
    if n == 1:
        return 0
    if n == 2:
        return 1
    if n in val:
        return val[n]
    term = fibonacci(n - 1) + fibonacci(n - 2)
    val[n] = term
    return term

if __name__ == "__main__":
    n = int(input('Enter value of n: '))
    for i in range(1, n + 1, 1):
        print(fibonacci(i), end=' ')
