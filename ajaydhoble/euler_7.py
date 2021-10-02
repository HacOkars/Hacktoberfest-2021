countPrimeNo = 0
i = 2
while True:
    cnt = 0
    if i % 2 == 0:
        pass
    for j in range(2,i):
        if i % j == 0:
            cnt = 1
    if cnt == 0:
        countPrimeNo += 1
    if countPrimeNo == 10001:
        print(i)
        break
    i += 1
