-- cwk2_24-25.hs FINAL SUBMISSION


-- Q2.

--Instantiating horse as type Horse

type Horse = [String]

horse :: Horse
horse = [ " ,            ", "/,`\\          ", "` | \\____\\\\   ", " _(      ) \\  ", " \\-\\~~~_|\\  \\ ", "    \\ `   \\   "]

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

-- Function to rotate horse 90º

transpose :: Horse -> Horse
transpose x = mirrorY $ func x
    where func :: Horse -> Horse
          func ([]:_) = []
          func x = map head x : func (map tail x)

-- Function to rotate horse 180º

rotate180 :: Horse -> Horse
rotate180 x = transpose $ transpose x

-- Function to rotate horse 270º

rotate270 :: Horse -> Horse
rotate270 x = transpose $ transpose $ transpose x


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


-- Q4.

--Function to print Horse

pretty :: Horse -> IO ()
pretty x = mapM_ putStrLn x

--Function to print Horse in different sequences

horseSeq :: (Int -> [Int]) -> Int -> Horse -> IO ()
horseSeq f n horse = 
    mapM_ (\x -> pretty (func x horse)) (f n)
    where func :: Int -> Horse -> Horse
          func n [] = []
          func n (x:xs) = unwords (replicate n x) : func n xs


-- Q5.










put x = putStrLn x