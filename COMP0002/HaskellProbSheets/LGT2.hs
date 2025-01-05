--elemnum
elemNum :: Eq a => a -> [a] -> Integer
elemNum c [] = 0
elemNum c (x:xs) | x == c = 1 + elemNum c xs
                 | otherwise = elemNum c xs

--unique
unique :: Eq a => [a] -> [a]
unique [] = []
unique str = [x | x <- str, elemNum x str == 1]

