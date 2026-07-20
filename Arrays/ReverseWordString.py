s = "the sky is blue";
output = s.split(); # first start with removing the empty space and adding into the list
result = " ".join(output[::-1])
# reverse using slicing and then join with space
print(result)
