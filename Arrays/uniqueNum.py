arr = [4,1,2,1,2];
ans=0;
for i in arr:
    print(f"comaprison {ans} between {i}")
    ans=ans ^ i
    
print(f"Unique number is {ans}")