T = int(input())
for test_case in range(1, T + 1):
    n = int(input())
    sum = 0
    for x in range(1, n + 1):
        if x % 2 == 0:
            sum -= x
        else:
            sum += x
    print("#%d %d" %(test_case, sum))