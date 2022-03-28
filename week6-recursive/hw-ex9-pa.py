def paren(n, SET):
    if (n % 2 == 1):
        paren(n-1, SET)
    elif (n == 0):
        SET += [""]
    else:
        for i in range (0, n, 2):
            temp = SET.copy()
            for x in temp:
                for y in temp:
                    if len(y) < n - len(x):
                        SET.append("("+x+")"+y)

num = int(input("Input the number of character (nonnegative): "))
SET = [""]
paren(num, SET)
print(SET)
print(set(SET)) #filter unique items