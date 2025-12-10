import Text.Printf (printf)

range :: Int -> Int -> [Int]
range a b
  | a > b     = []
  | otherwise = a : range (a+1) b

main = do
    printf "%s\n" $ show $ range 5 15
    printf "%s\n" $ show $ range 0 20