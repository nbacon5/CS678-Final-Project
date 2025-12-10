import Text.Printf

doubleSmallNumber :: Int -> Int
doubleSmallNumber x
    | x > 100 = x
    | otherwise = x * 2

main = do
    printf "%d\n" (doubleSmallNumber 4)
    printf "%d\n" (doubleSmallNumber 20)
    printf "%d\n" (doubleSmallNumber 150)
