module Bob (responseFor) where

import Data.Char (isSpace)

trim :: String -> String
trim = f . f
   where f = reverse . dropWhile isSpace

responseFor :: String -> String
responseFor ask
  | xs == "" = "Fine. Be that way!"
  | isQuestion && isYelling = "Calm down, I know what I'm doing!"
  | isQuestion = "Sure."
  | isYelling = "Whoa, chill out!"
  | otherwise = "Whatever."
  where
    xs = trim ask
    isQuestion = last xs == '?'
    isYelling = 
        all (`notElem` ['a'..'z']) xs
        && 
        any (`elem` ['A'..'Z']) xs 

