void bitmanipulationtricks(int num, int n){
	// nth bit is set
	bool ans = num & (1 << n);
	// set the nth bit
	num |= (1 << n);
	//unset nth bit
	num &= ~(1 << n);
	//toggle nth bit
	num ^= (1 << n);
	//turn off the rightmostbit
	num &= (num - 1);
	//get the rightmost set bit
	num &= (-num);
	//get the rightmost unset bit
	num = ~num & (num + 1);
	//turn on the rightmost 0 bit
	num |= (num +1);
	//clear all bits from lsb to nth bit
	int mask = ~((1 << i+1) - 1);
	num &= mask;
	//clear all bits from msb to nth bit
	mask = (1 << i) - 1;
	x &= mask;
	//divide number by 2
	num >>= 1;
	// multiply number by 2
	num <<= 1;
}

//compute xor from 1 to num
int computeXor(int num){
	if(num % 4 == 0) return n;
	else if(num % 4 == 1) return 1;
	else if(num % 4 == 2) return n + 1;
	else return 0;
}







