module Pangram (isPangram) where

import Data.Char 

-- isPangram :: String -> Bool
-- isPangram text = map toLower text == ""

-- map (\x -> elem x (lowerPangram "The Quick brown fox jumps over the Lazy Dog")) allLetters
isPangram :: String -> Bool 
isPangram text = 
     foldr (&&) True $ map (\x -> elem x (map toLower text)) allLetters

allLetters = ['a'..'z']
