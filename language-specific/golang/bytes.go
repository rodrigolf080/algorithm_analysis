func bytes() {
	// 0000 1110 = 12
	var n int = 12
	// 0000 0001 = 1
	n = n >> 1
	// 0000 1111 = result
	// >> shift rightmost bytes to the right element
	// << shift leftmost bytes to the left element
	fmt.Println(n)
}
