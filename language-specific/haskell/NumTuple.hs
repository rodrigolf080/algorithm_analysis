instance (Num a, Num b) => Num (a, b) where
    (a,b) + (c,d) = (a+c, b+d)
    (a,b) - (c,d) = (a-c, b-d)
    (a,b) * (c,d) = (a*c, b*d)
