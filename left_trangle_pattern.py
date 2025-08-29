size = int(input("Enter the size of the pattern: "))
for i in range(size + 1):
    for k in range(1, i + 1):
        print("*", end = " ")
    print()