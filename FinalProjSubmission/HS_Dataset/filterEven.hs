import Text.Printf (printf)

filterEven :: [Int] -> [Int]
filterEven [] = []
filterEven (x:xs)
  | even x = x : filterEven xs
  | otherwise = filterEven xs

main = do
    printf "%s\n" $ show $ filterEven [1,2,3,4,5,6,7,8,9,10]
    printf "%s\n" $ show $ filterEven [2,4,8]
    printf "%s\n" $ show $ filterEven [1,2,3]