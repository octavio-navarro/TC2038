import time

def fib_recursive(n: int) -> int:
    return n

def fib_dp(n: int) -> int:
    return n

def fib_naive(n: int) -> int:
    return n

def solve(n :int) -> None:

    start = time.time_ns()
    r_rec = fib_recursive(n)
    end = time.time_ns()

    print(f'Fibonacci recursive: {r_rec} Time: {end-start} nanoseconds')

    start = time.time_ns()
    r_dp = fib_dp(n)
    end = time.time_ns()

    print(f'Fibonacci dp: {r_dp} Time: {end-start} nanoseconds')
    
    start = time.time_ns()
    r_naive = fib_naive(n)
    end = time.time_ns()

    print(f'Fibonacci naive: {r_naive} Time: {end-start} nanoseconds')

if __name__ == "__main__":
    solve(46)
