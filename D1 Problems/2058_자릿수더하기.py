T = int(input())
sum = T % 10
while(T > 0):
    T //= 10
    sum += T % 10
print(sum)