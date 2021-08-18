func myPow(x float64, n int) float64 {
    var acc float64 = 1
    if (n > 0){
        acc = 1
        for i := 0; i < n; i++{
            acc *= x
        }
    } else if (n < 0){
        n = -n
        for i := 0; i < n; i++{
            acc /= x
        }
    } else {
        // x^0 = 1
    }

    return acc
}
