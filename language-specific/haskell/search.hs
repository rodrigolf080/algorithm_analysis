search [] = Nothing
search (x:xs) = if (head x) == 'H' then Just x else search xs
