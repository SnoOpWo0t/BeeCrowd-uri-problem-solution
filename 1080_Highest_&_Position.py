def find_divisors(n):
    divisors = []
    for i in range(1, n + 1):
        if n % i == 0:
            divisors.append(i)
    return divisors

# Example usage:
number = int(input())
print(f"{find_divisors(number)}")
