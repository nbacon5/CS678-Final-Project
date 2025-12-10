import Text.Printf

sumSquares :: [Int] -> Int
sumSquares [] = 0
sumSquares (x:xs) = x^2 + sumSquares xs

main = do
    printf "%s\n" $ show $ sumSquares [1,2,3,4,5]
    printf "%s\n" $ show $ sumSquares [2,8,16]