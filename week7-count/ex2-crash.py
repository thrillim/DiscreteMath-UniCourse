print("waiting..")
count = 0
for x in range(100, 1001):
    for y in range(100, 1001):
        for z in range(100, 1001):
            for t in range(100, 1001):
                if (x+y+z+t == 1000):
                    count += 1
                    print(x,y,z,t)
print(count)

# when x increased, print(x,y,z,t) stuck