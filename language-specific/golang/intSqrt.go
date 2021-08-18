func mySqrt(x int) int {
	var i int
	for 1 < 2 {
		if i*i == x {
			return i
		} else if i*i > x {
			return i - 1
		} else {
			i++
		}
	}
	return 0
}
