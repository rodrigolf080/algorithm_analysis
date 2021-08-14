import Parsing
-- a parser for things
-- is a function from strings
-- to lists of pairs
-- of thing and strings
--
-- Dr Seuss

--type Parser a = String -> [(a, String)]

-- expr ::= term + expr | term
-- term ::= factor * term | factor
-- factor ::= (expr) | int 

-- testing example:
-- ghci> parse "(2+3*4)"

expr = do x <- term
          char '+'
          y <- expr
          return (x+y)
        <|> term

term = do x <- factor
          char '*'
          y <- term
          return (x*y)
        <|> factor

factor = do char '('
            x <- expr
            char ')'
            return x
          <|> int


    
