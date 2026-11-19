t = int(input())

for _ in range(t):
    a, b, c = map(int, input().split())
    
    mini = min({a, b, c})
    maxi = max({a, b, c})
    
    print(a+b+c-mini-maxi)