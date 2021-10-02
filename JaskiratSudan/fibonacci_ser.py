

if __name__=='__main__':
    #number of terms    
    val = int(input("How many numbers you want from fibonacci series: "))

    #final series
    ser = [0,1]

    for i in range(val-2):
        #adds prev number to the next and appends in the list
        ser.append(ser[i] + ser[i+1])
        
    print("Fibonacci series:")
    print(ser)