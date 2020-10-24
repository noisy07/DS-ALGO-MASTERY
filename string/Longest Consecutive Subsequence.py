'''
Time Complex: O(n)
Example:

Input:
2 3 5 1

Output:
3
'''

t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))

    ans = 0
    s = set()
    for i in l:
        s.add(i)

    for i in l:
        if not i-1 in s:
            j = i
            count = 0
            while j in s:
                j += 1
                count += 1

            ans = max(ans, count)

    print(ans)
