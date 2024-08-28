# Reading input as a list of integers
values = list(map(int, input().split()))

# Assign A as the first element
A = values[0]

# Iterate through the rest to find a valid N
for N in values[1:]:
    if N > 0:
        break

# Calculate the sum of N numbers starting from A
result = sum(A + i for i in range(N))

# Print the result
print(result)
