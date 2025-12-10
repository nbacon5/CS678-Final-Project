import Text.Printf (printf)

describeList :: [a] -> String
describeList [] = "Empty"
describeList [x] = "Singleton"
describeList [x,y] = "Two elements"
describeList _ = "Many elements"

main = do
  printf "%s\n" $ describeList []
  printf "%s\n" $ describeList [1]
  printf "%s\n" $ describeList [1,2]
  printf "%s\n" $ describeList [1,2,3]