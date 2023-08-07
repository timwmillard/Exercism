module Pangram (isPangram) where

import Data.Char (toLower)

isPangram :: String -> Bool 
isPangram text = 
     foldr (&&) True 
     $ map (\x -> elem x lowerText) letters
     where 
        letters = ['a'..'z']
        lowerText = map toLower text

