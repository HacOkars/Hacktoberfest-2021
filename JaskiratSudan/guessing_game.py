import random as r


def guess():

	num = r.randint(1,100)
	score = 0

	while True:
		
		print("Enter a number:")
		a = int(input())
		
		guess = [0]
		guess.append(a)

	

		if guess[-1]>1 and guess[-1]<100:
			
		
			if guess[-1]>=num-10 and guess[-1]<=num+10 and guess[-1]!=num:
				print("warm")
			
			elif guess[-1]==num:
				print("Hurray thats the number")
				break

			else:
				print("cold")
		
		elif guess[-1]==1001:
			
			print(num)

		else:
			print("out of range")

		score+=1
	
	print("\nYour score is: {}".format(score))



if __name__ == '__main__':
	guess()
