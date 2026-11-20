t = int(input())

for _ in range(t):
    n = int(input())
    
    arr = list(map(int, input().split()))
    
    for i in range(n):
        if i == 0:
            if arr[i] != arr[i+1]:
                if arr[i+1] == arr[i+2]:
                    print(i+1)
                    break
        elif i == n-1:
            if arr[i] != arr[i-1]:
                if arr[i-1] == arr[i-2]:
                    print(i+1)
                    break
        else:
            if arr[i] != arr[i-1] and arr[i] != arr[i+1]:
                print(i+1)
                break