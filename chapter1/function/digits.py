# Kattis: Digits
# author: uncoded

def f(n, x="", i=0):
    return f(str(len(n)), n, i+1) if n != x else i


while 1:
    inp = input()
    if inp == "END": break
    print(f(inp))

