#Find Highest occurence character from the string

count = {}

a = "bhavya"
for i in a:
    count[i] = count.get(i,0) + 1
   
for k in count:
    if count[k] > 1:
      print(k)
   

