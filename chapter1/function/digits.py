# Kattis: Digits
# author: uncoded


def f(n, i=0, last=""):
    if n != last:
        i = f(str(len(n)), i + 1, n) 
    return i


def main():
    while 1:
        inp = input()
        if inp == "END":
            break
        print(f(inp))


if __name__ == "__main__":
    main()

