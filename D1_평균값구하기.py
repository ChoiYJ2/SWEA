T = int(input())
for test_case in range(1, T + 1):
    sum = 0
    n = input().split()
    for x in n:
        sum += int(x)
    print("#%d %d" %(test_case, round(sum / 10)))