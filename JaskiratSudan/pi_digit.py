def countpi(n):
    pi = 22/7
    result = []
    spi = str(pi)
    
    while True:

	    if n>15:
	    	print("not available")
	    	break

	    result.append(spi[:n+2])
	    print(result) 
	    break
    
    


if __name__ == '__main__':
	n = int(input())
	countpi(n)