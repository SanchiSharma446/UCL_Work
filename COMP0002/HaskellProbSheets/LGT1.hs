--firstPlusOne
firstPlusOne :: [Int] -> Int
firstPlusOne [] = 0
firstPlusOne (x:xs) = x + 1

--SumOrElse
sumOrElse :: [Int] -> Int
sumOrElse [] = 0
sumOrElse (x:[]) = x
sumOrElse (a:b:xs) = a + b

--fpoFunc
fpoFunc :: [Int] -> Int
fpoFunc xs = if length xs == 0 then 0 else (head xs) + 1

--soeFunc
soeFunc :: [Int] -> Int
soeFunc xs = if length xs == 0 then 0 
             else if length xs == 1 then head xs 
             else head xs + head(tail xs)

--FirstDigit'
firstDigit' :: String -> Char
firstDigit' [] = ' '
firstDigit' (x:xs) = if x `elem` ['0'..'9'] then x else firstDigit' xs

--exOr
exOr :: Bool -> Bool -> Bool
exOr True True = False
exOr False False = False
exOr True False = True
exOr False True = True

--exOr2
exOr2 :: Bool -> Bool -> Bool
exOr2 x y = not (x == y)