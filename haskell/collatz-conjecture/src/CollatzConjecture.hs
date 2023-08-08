module CollatzConjecture (collatz) where

collatz :: Integer -> Maybe Integer
collatz n
  | n < 1 = Nothing
  | otherwise = Just (accum n 0)
  where
    accum x c
      | x == 1 = c
      | even x = accum (x `div` 2) (c + 1)
      | otherwise = accum (x * 3 + 1) (c + 1)

