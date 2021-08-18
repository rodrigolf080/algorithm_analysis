myAction :: IO ()
myAction = do
    s <- getLine
    putStrLn s
    putStrLn s

main = do
    myAction
    myAction
    myAction

