# Find the largest element from the array

a = [1,4,5,6,2]
largest = a[0]
secondLargest = 0
for i in a:
    if(i>largest):
      largest = i
print("largest Elem in Array: ",largest)