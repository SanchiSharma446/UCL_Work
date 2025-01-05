import Data.Char

--inRange
inRange :: Int -> Int -> [Int] -> [Int]
inRange a b [] = []
inRange a b (x:xs) | x >= a && x <= b = x : inRange a b xs
                   | otherwise = inRange a b xs
                   
--my prev def:
--inRange a b (x:xs) = [] ++ (if x >= a && x <= b then [x] else []) ++ inRange a b xs

--countPositives
countPositives :: [Int] -> Int
countPositives [] = 0
countPositives (x:xs) | x > 0 = 1 + countPositives xs
                      | otherwise = countPositives xs

--capitalised
lowerWord :: String -> String
lowerWord [] = []
lowerWord (x:xs) = toLower x : lowerWord xs

capitalised :: String -> String
capitalised [] = []
capitalised (x:xs) = toUpper x : lowerWord xs

--title 
auxTitle :: [String] -> [String]
auxTitle [] = []
auxTitle (x:xs) | length x >= 4 = capitalised x : auxTitle xs
                | otherwise = map toLower x : auxTitle xs

title :: [String] -> [String]
title [] = []
title (x:xs) = capitalised x : auxTitle xs

--insertionSort
isort :: Ord a => [a] -> [a]
isort [] = []
isort (x:xs) = insert' x (isort xs)
    where insert' x [] = [x]
          insert' x (y:ys) | x <= y = x : y : ys
                           | otherwise = y : insert' x ys

--merge
merge :: Ord a => [a] -> [a] -> [a]
merge [] [] = []
merge [] xs = xs
merge xs [] = xs
merge (x:xs) (y:ys) | x <= y = x : (merge xs (y:ys))
                    | otherwise = y : (merge ys (x:xs))

--cipher
rotor :: Int -> String -> String
rotor 0 str = str
rotor n [] = []
rotor n (c:str) | (n >= 0) && (n <= length (c:str)) = rotor (n-1) (str ++ [c])
                | otherwise = error "offset out of range"

makeKey :: Int -> [(Char,Char)] 
makeKey n = zip['A'..'Z'] (rotor n ['A'..'Z'])

lookUp :: Char -> [(Char,Char)] -> Char
lookUp c [] = c
lookUp c ((c1, c2):rest) | c == c1 = c2
                         | otherwise = lookUp c rest

encipher :: Int -> Char -> Char
encipher n c = lookUp c (makeKey n)

normalise :: String -> String
normalise [] = []
normalise (x:xs) | x `elem` ['A'..'Z'] || x `elem` ['0'..'9'] = x : normalise xs
                 | x `elem` ['a'..'z'] = toUpper x : normalise xs
                 | otherwise = normalise xs


encipherStr :: Int -> String -> String
encipherStr n str = aux n (normalise str)
    where aux n [] = []
          aux n (c:str) = (encipher n c) : aux n (str)

decipher :: String -> [String]
decipher [] = []
decipher str = [encipherStr n str | n <- [0..25]] 