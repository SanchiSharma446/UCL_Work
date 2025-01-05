import Data.Char

--square
square :: Int -> Int
square x = x * x

--pyth
pyth :: Int -> Int -> Int
pyth x y = square x + square y

--isTriple
isTriple :: Int -> Int -> Int -> Bool
isTriple a b c = pyth a b == square c

--isTripleAny
isTripleAny :: Int -> Int -> Int -> Bool
isTripleAny a b c = isTriple a b c || isTriple b c a || isTriple c a b

--halfEvens
halfEvens :: [Int] -> [Int]
halfEvens xs = [if x `mod` 2 == 0 then x `div` 2 else x | x <- xs]

--inRange
inRange :: Int -> Int -> [Int] -> [Int]
inRange a b xs = [x | x <- xs, x >= a, x<= b]

--countPositives
countPositives :: [Int] -> Int
countPositives xs = length [x | x <- xs, x > 0]

--capitalised
capitalised :: String -> String
capitalised [] = [] --don't forget this
capitalised (x:xs) = toUpper x : [toLower a | a <- xs] 

--title
title :: [String] -> [String]
title [] = []
title (x:xs) = capitalised x : [if length i>=4 then capitalised i else map toLower i | i <- xs]
