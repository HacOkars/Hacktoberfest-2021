"""
This is a Python3 program to check if a number is Krishnamurthy number.
A number is a Krishnamurthy number if the sum of the factorials of the digits of the number is equal to the number itself.
For example, 1, 2 and 145 are Krishnamurthy numbers.
Krishnamurthy number is also referred to as a Strong number.
"""

  def kmurthy(n):
    """
    Returns True if the number is a Krishnamurthy number, else returns False
    """
    #Initialising s to 0, s will store the sum of factorials of the digits
    s=0
    #Storing n in temporary variable tmp
    tmp=n
    
    #Only positive integers can be Krishnamurthy numbers
    if n<=0 or str(type(n))!="<class 'int'>":
        return False
      
    #Checking if the number is a Krishnamurthy number
    else:
        while n!=0:
            #Computing factorial of each digit
            fact=1
            for i in range(1,n%10+1):
                fact=fact*i
            #Computing sum of factorials
            s=s+fact
            #Discarding the digit for which factorial has been calculated
            n=n//10
        
        #Evaluating if the sum of factorials of digits equals the number itself
        if tmp==s:
            return True
        else:
            return False
