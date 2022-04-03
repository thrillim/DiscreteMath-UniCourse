count = 0;
for x in range(1,1001):
    if (x % 12 == 0 or x % 15 == 0):
        count += 1
print(count)

