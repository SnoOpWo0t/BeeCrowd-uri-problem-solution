def print_divisors(n):
    for i in range(1, n + 1):
        if n % i == 0:
            print(i)

# Example usage:
number = int(input())
print_divisors(number)
