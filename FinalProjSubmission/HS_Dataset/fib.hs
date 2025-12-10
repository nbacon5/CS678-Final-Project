import Text.Printf

fib :: Int -> Int
fib 0 = 0
fib 1 = 0
fib n = fib (n - 1) + fib (n - 2)

main = do
    printf "%d\n" (fib 3)
    printf "%d\n" (fib 4)
    printf "%d\n" (fib 7)