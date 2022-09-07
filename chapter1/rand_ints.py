import random


def main():
    n = int(input())
    s = set()
    while n:
        s.add(random.randint(1, 1000))
        n -= 1
    print(*sorted(s))


if __name__ == "__main__":
    main()

