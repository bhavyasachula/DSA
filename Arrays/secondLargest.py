# Find the Second Largest Element from the Array

a = [1,2,4,7,7,5]

largest = 0
secondLargest = 0 
for i in a:
    if(i>largest):
        largest = i
        
for i in a:
    if(i>secondLargest and i!=largest):
        secondLargest = i

print("Second largest Element in Array :",secondLargest) 