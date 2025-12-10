import Text.Printf (printf)

applyTwice :: (a -> a) -> a -> a
applyTwice f x = f (f x)

increment :: Int -> Int
increment x = x + 1

decrement :: Int -> Int
decrement x = x - 1

square :: Int -> Int
square x = x ^ 2

main = do
    printf "%d\n" $ applyTwice increment 5
    printf "%d\n" $ applyTwice decrement 5
    printf "%d\n" $ applyTwice square 5
