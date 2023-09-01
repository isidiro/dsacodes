//(a + b) % m = (a % m + b % m) % m
//(a - b) % m = (a % m - b % m + m) % m
//(a * b) % m = (a % m * b % m) % m
//(a / b) % m = (a % m * b^-1 % m) % m
// we can only find the multiplicative modulo inverse if a and m are coprime

// multiplicative modulo inverse using extended euclid algo 
// the coefficients are used to find the multplicative inverse

int d,x,y;
int modInverse(int A, int M)
{
    extendedEuclid(A,M);
    return (x%M+M)%M;    //x may be negative
}

// other way is to compute by fermat little theorom 
// this can only be used if m is prime 

int modInverse(int A,int M)
{
    return binaryExponentiation(A,M-2,M);
}