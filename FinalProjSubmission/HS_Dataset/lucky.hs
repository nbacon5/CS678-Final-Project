import Text.Printf

lucky :: Int -> String
lucky 7 = "LUCKY NUMBER SEVEN!"
lucky x = "Sorry, you're out of luck, pal!"

main = do
    printf "%s\n" (lucky 4)
    printf "%s\n" (lucky 7)