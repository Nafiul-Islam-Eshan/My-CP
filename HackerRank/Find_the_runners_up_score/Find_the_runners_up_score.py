n = int(input())
scores = list(map(int, input().split(" ")));
max = scores[0]
for i in range (n):
    if(max < scores[i]):
        max = scores[i]
scores.remove(max)
max = scores[0]
for i in range (n-1):
    if(max < scores[i]):
        max = scores[i]
print(max)