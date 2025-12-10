import Text.Printf (printf)

doubleUs :: Int -> Int -> Int
doubleUs x y = x*2 + y*2

main = do
    printf "%d\n" (doubleUs 1 2)
    printf "%d\n" (doubleUs 3 4)
    printf "%d\n" (doubleUs 5 10)