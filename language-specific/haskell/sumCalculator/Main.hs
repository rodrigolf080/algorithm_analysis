module Main where

main :: IO()
main = do
    putStrLn "Pick a number: "
    n1 <- getLine
    putStrLn ("Number is " ++ (show n1))
    putStrLn "Another number: "
    n2 <- getLine
    let n3 = (read n1) + (read n2)
    putStrLn ("Sum of numbers = " ++ (show n3))