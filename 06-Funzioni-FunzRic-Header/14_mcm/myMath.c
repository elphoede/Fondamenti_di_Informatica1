int MCD(int a, int b) {
	if (a == b) {
		return a;
	}
	else if (a > b) {
		MCD(a - b, b);
	}
	else {
		MCD(a, b - a);
	}
}

int mcm(int a, int b) {
	return (a * b) / MCD(a, b);
}