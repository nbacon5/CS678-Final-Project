import Text.Printf (printf)
data Op = Add | Sub | Mul

applyOp :: Op -> Int -> Int -> Int
applyOp Add x y = x + y
applyOp Sub x y = x - y
applyOp Mul x y = x * y

evalList :: Op -> [Int] -> Int
evalList _ [] = 0
evalList op (x:xs) = applyOp op x (evalList op xs)

main = do
    printf "%d\n" $ evalList Add [1,2,3,4,5]
    printf "%d\n" $ evalList Sub [5,1,2]
    printf "%d\n" $ evalList Mul [2,3,4]