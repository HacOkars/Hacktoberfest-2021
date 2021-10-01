# List for storing multiplies
multiplies = []

for i in range(10):
    if i % 3 == 0 or i % 5 == 0:
        multiplies.append(i)

print("The sum of all the multiples of 3 or 5 below 1000 is", sum(multiplies))
