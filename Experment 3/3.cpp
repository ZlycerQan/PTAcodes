void project :: Modify (int a, int b) {
	r = a, c = b;
}
int project :: Query () {
	return (r * c) == 0 ? -1 : r * c;
}
void project :: Init () {
	r = c = 0;
}
