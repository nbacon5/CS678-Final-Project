import Text.Printf

factorial :: Int -> Int
factorial 0 = 1
factorial n = n * factorial (n - 1)

main = do
    printf "%d\n" (factorial 3)
    printf "%d\n" (factorial 4)
    printf "%d\n" (factorial 7)