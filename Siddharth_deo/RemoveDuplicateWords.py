# Remove duplicate words from Sentence using Regular Expression
# Python program to remove duplicate words
# using Regular Expression or ReGex.
import re
 
 
# Function to validate the sentence
# and remove the duplicate words
def removeDuplicateWords(input):
 
    # Regex to matching repeated words
    regex = r'\b(\w+)(?:\W+\1\b)+'
 
    return re.sub(regex, r'\1', input, flags=re.IGNORECASE)
 
 
# Driver Code
 
# Test Case: 1
str1 = "Good bye bye world world"
print(removeDuplicateWords(str1))
 
# Test Case: 2
str2 = "Ram went went to to his home"
print(removeDuplicateWords(str2))
 
# Test Case: 3
str3 = "Hello hello world world"
print(removeDuplicateWords(str3))