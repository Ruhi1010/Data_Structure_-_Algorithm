size = int(input("Enter the size of the pattern: "))
for i in range(1, size+1):
    for j in range(i):
        if j == 0 or j == i-1:
            print("*" , end=" ")
        else: 
            if i != size:
                print(" ", end=" ")
            else:
                print("*", end=" ")
    print()