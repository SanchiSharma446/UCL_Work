tribonacci :: Int -> [Int]
tribonacci x = map trib [1..x]
    where trib 0 = 0
          trib 1 = 0
          trib 2 = 1
          trib n = trib(n-1)+trib(n-2)+trib(n-3)

lazyCarters :: Int -> [Int]
lazyCarters x = map lc [0..x]
    where lc n = ((n*n) + n + 2) `div` 2

--attempting to rotate a 2d array 
--Maybe i can treat them as matricies multiply by rotation matrix? 

--OKAY SO. This is how code will work, this is what to research and figure out how to do in Haskell.

-- Horse Function:
    -- Basic. Uses ASCII and stores Horse as 2d Array. 
    -- Has Aux function that iterates through array and prints values w/o brakcets and commas

-- Transpose
    -- Utilises Matrix multiplication to rotate array 90º
    -- Function repeated thrice to print in all orientations
    -- ***NEED TO RESEARCH HOW TO DO MATRIX MULT IN HASKELL***
        --Similar to python or math???

type Horse = [String]

horse :: Horse
horse = [ " ,            ", "/,`\\          ", "` | \\____\\\\   ", " _(      ) \\  ", " \\-\\~~~_|\\  \\ ", "    \\ `   \\   "]

printHorse :: Horse -> IO ()
printHorse x = mapM_ putStrLn x

reverseHorse :: Horse -> Horse
reverseHorse [] = []
reverseHorse (x:xs) = reverseHorse xs ++ [x]

test horse = printHorse (reverseHorse horse)