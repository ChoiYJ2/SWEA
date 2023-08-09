T = int(input())
for test_case in range(1, T + 1):
    n = input()
    ck = ''
    for x in range(0, len(n)):
        if x == 0:
            ck += n[x]
            continue
        if ck[0] == n[x]:
            if ck == n[x:(x+len(ck))]:
                print("#%d %d" %(test_case, len(ck)))
                break
        ck += n[x]