import Text.Printf (printf)

fibAccum :: Int -> Int
fibAccum n = fibHelper n 0 1
  where
    fibHelper 0 a _ = a
    fibHelper n a b = fibHelper (n-1) b (a+b)

main = do
    printf "%d\n" $ fibAccum 10
    printf "%d\n" $ fibAccum 5
    printf "%d\n" $ fibAccum 15