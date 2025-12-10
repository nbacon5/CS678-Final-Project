import Text.Printf

densityTell :: (RealFloat a) => a -> String
densityTell density
    | density < 1.2 = "Wow! You're going for a ride in the sky!"
    | density <= 1000.0 = "Have fun swimming, but watch out for sharks!"
    | otherwise = "If it's sink or swim, you're going to sink."

main = do
    printf "%d\n" (densityTell 1)
    printf "%d\n" (densityTell 4.5)
    printf "%d\n" (densityTell 1250.123)
    printf "%d\n" (densityTell (-8.2))