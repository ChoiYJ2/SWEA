T = int(input())
for test_case in range(1, T + 1):
    n = input()
    month = int(n[4:6])
    day = int(n[6:])
    print("#%d " %(test_case), end='')
    if day <= 0:
        print("-1")
        continue
    if month == 2:
        if day <= 28:
            print(f"{n[:4]}/{n[4:6]}/{n[6:]}")
            continue
    elif month in range(1, 8, 2) or month in range(8, 13, 2):
        if day <= 31:
            print(f"{n[:4]}/{n[4:6]}/{n[6:]}")
            continue
    elif month in range(2, 7, 2) or month in range(9, 12, 2):
        if day <= 30:
            print(f"{n[:4]}/{n[4:6]}/{n[6:]}")
            continue
    print("-1")