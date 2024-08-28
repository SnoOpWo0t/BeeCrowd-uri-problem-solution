# Read the input values
X = int(input())
Y = int(input())

# Ensure X is less than Y for ascending order
if X > Y:
    X, Y = Y, X

# Iterate over the range and check the condition
for number in range(X + 1, Y):
    if number % 5 == 2 or number % 5 == 3:
        print(number)
