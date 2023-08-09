T = int(input())
for test_case in range(1, T + 1):
    n = map(int, input().split(' '))
    print("#%d %d" %(test_case, max(n)))