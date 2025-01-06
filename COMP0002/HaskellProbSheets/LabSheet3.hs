--mult 
mult :: Num a => [a] -> a --So any num value, not just int!
mult [] = 0
mult vals = foldr (*) 1 vals

--posEvenList 
posEvenList :: [Int] -> [Int]
posEvenList vals = filter (\x -> x > 0) (filter even vals)

--trueList
trueList :: [Bool] -> Bool
trueList vals = foldr (&&) True vals

--allEven
allEven :: [Int] -> Bool
allEven vals = foldr (&&) True (map even vals)

--maxList
maxList :: Ord a => [a] -> a
maxList vals = foldr (max) (head vals) (vals)

--inRange
inRange :: Int -> Int -> [Int] -> [Int]
inRange a b xs = filter (\x -> x <= b && x>= a) xs

--countPositives
countPositives :: [Int] -> Int
countPositives xs = foldr (+) 0 (map (\x -> 1) (filter (\x -> x>0) xs))

--myLength
myLength :: String -> Int
myLength xs = foldr (+) 0 (map (\x -> 1) xs)

--myMap
myMap :: (a -> b) -> [a] -> [b]
myMap func = foldr ((:).func) [ ]

--myLength'
myLength' :: String -> Int
myLength' xs = foldr (+) 0 (myMap (\x -> 1) xs)