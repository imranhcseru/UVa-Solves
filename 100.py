import sys
import functools

if __name__ == '__main__':
    for line in sys.stdin:
        start, end = map(int, line.split()[:2])
        print(start)