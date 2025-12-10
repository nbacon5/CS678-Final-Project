import Text.Printf (printf)
reverseList :: [a] -> [a]
reverseList lst = reverseHelper lst []
  where
    reverseHelper [] acc = acc
    reverseHelper (x:xs) acc = reverseHelper xs (x:acc)

main = do
    printf "%s\n" $ show $ reverseList [1,2,3,4,5]