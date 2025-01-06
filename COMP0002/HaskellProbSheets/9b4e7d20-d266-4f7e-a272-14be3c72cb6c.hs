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

