--Q1
listSquare :: [Int] -> [Int]
listSquare ns = map (\x -> x*x) (ns)

sumSquares :: [Int] -> Int
sumSquares ns = foldr (+) 0 (listSquare ns)

checkPos :: [Int] -> Bool
checkPos ns = foldr (&&) True (map (>0) ns) --can remove x terms/lambda funcs for comparatives

--Q2
fMin :: (Ord b, Num b) => (Int -> b) -> Int -> b
fMin f n = foldr (min) 0 (map f [0..n])

fEq f n = foldr (&&) True  (map ((== f(0)) . f) [0..n])

fPos f n = foldr (&&) True  (map ((>0) . f) [0..n])

fCons f n = foldr (<) (f(0)) [f(0), f(1), f(n)]