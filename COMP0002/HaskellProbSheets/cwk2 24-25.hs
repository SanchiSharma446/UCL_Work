--FINAL SUBMISSION


-- Q2.

--Instantiating horse as type Horse and prinqting it 

type Horse = [String]

horse :: Horse
horse = [ " ,            ", "/,`\\          ", "` | \\____\\\\   ", " _(      ) \\  ", " \\-\\~~~_|\\  \\ ", "    \\ `   \\   "]

printHorse :: Horse -> IO ()
printHorse x = mapM_ putStrLn x


-- Function to rotate horse 90º


-- Function to mirror horse around vertical axis

repl :: Char -> Char --Text replacements function to make ASCII art look better
repl '\\' = '/'
repl '/' = '\\'
repl '(' = ')'
repl ')' = '('
repl x = x

mirrorY :: Horse -> Horse
mirrorY [] = []
mirrorY (x:xs) = [aux x] ++ mirrorY xs
    where aux [] = []
          aux (x:xs) = aux xs ++ [repl x] 



-- Q3.

--Tribonacci Sequence

tribonacci :: Int -> [Int]
tribonacci x = map trib [1..x]
    where trib 0 = 0
          trib 1 = 0
          trib 2 = 1
          trib n = trib(n-1)+trib(n-2)+trib(n-3)

--Lazy Carter's Sequence

lazyCarters :: Int -> [Int]
lazyCarters x = map (\n -> ((n*n) + n + 2) `div` 2) [0..x]
