// let's say there are two numbers a and b so calculate there gcd also calulate
// what value of x and y do we obtain the gcd: ax + by = gcd calculate x and y

int gcd(int a, int b, int &x, int &y){
	if(!b){
		x = 1;
		y = 0;
		return a;
	}
	int x1, y1;
	int d = gcd(b, a %b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;
}
