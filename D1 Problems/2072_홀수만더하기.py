T = int(input())
for test_case in range(1, T + 1):
    sum = 0
    case_num = input().split()
    for x in case_num:
        x = int(x)
        if(x % 2) != 0:
            sum += x
    print("#%d %d" %(test_case, sum))