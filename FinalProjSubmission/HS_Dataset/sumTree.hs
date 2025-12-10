import Text.Printf (printf)

data Tree = Leaf Int | Node Tree Int Tree

sumTree :: Tree -> Int
sumTree (Leaf x) = x
sumTree (Node left x right) = sumTree left + x + sumTree right

main = do
    printf "%d\n" $ sumTree (Node (Leaf 1) 2 (Leaf 3))
    printf "%d\n" $ sumTree (Node (Node (Leaf 1) 2 (Leaf 3)) 4 (Node (Leaf 5) 6 (Node (Leaf 7) 8 (Leaf 9))))