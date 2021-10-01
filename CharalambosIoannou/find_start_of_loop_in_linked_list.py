# Step1: Proceed in the usual way, you will use to find the loop, i.e. Have two pointers, increment one in single step and other in two steps,
# If they both meet in sometime, there is a loop.
#
# Step2: Freeze one pointer where it was and increment the other pointer in one step counting the steps you make and when they both meet again,
# the count will give you the length of the loop (this is same as counting the number of elements in a circular link list).
#
# Step3: Reset both pointers to the start of the link list, increment one pointer to the length of loop times and
# then start the second pointer. increment both pointers in one step and when they meet again, it will be the start of the loop
# (this is same as finding the nth element from the end of the link list).
