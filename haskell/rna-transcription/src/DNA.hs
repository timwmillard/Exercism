module DNA (toRNA) where


toRNA :: String -> Either Char String
toRNA "" = Right ""
toRNA (x : xs) = Right (r : toRNA xs)
  where
    r = case x of
      'G' -> 'C'
      'C' -> 'G'
      'T' -> 'A'
      'A' -> 'U'
      _ -> 'X'

-- toRNA2 :: String -> String
-- toRNA2 "" = ""
-- toRNA2 (x : xs) = r : toRNA2 xs
--   where
--     r = case x of
--       'G' -> 'C'
--       'C' -> 'G'
--       'T' -> 'A'
--       'A' -> 'U'
--       _ -> 'X'
