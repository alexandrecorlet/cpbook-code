# Kattis: Line Them Up!
# author: uncoded
n = int(input())
lst = [input() for i in range(n)]
sorted_lst = sorted(lst)
print("INCREASING" if lst == sorted_lst else "DECREASING" if lst == sorted_lst[::-1] else "NEITHER") 

