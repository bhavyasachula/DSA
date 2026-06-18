# Find the Second Largest Element from the Array
# Brute Force
a = [1,2,4,7,7,5]

largest = 0
secondLargest = 0 
for i in a:
    if(i>largest):
        largest = i
        
for i in a:
    if(i>secondLargest and i!=largest): # 5>4 and 5!=7:False sl:4
        secondLargest = i #sl=5 

print("Second largest Element in Array :",secondLargest) 