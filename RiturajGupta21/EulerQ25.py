import itertools


def app():
    n = 1000
    b = 1
    m = 0
    for i in itertools.count():
        if len(str(m)) > n:
            raise RuntimeError("Not found")
        elif len(str(m)) == n:
            return str(i)
        b, m = m, b + m


if __name__ == "__main__":
    print(app())
