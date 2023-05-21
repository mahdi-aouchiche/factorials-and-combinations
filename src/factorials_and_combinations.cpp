#include "../header/factorials_and_combinations.hpp"

/* 
    Return n! if n >= 0, otherwise -1
    Throws exception if memory overflows. n! = INF
*/
long double factorial(int n) {
    if (n < 0){ 
        return -1;  /* Invalid */
    }

	long double f = 1.0;
	for(int i = n; i >= 2; i--){
	    f *= i;
	}

    if ( f == numeric_limits<long double>::infinity()) {
        throw std::domain_error("Infinity, memory overflow!") ;
    }
    
	return f;
}

/* Return C(n,k) */
long double combination(int n, int k){
    
    if(n < k) { 
        return 0;
    }

    long double f = factorial(n);

    long double c = f / (factorial(k) * factorial(n-k));
    
    return c;
}

/* Display menu */
void menu() {
    cout << "Menu:" << endl;
    cout << "1 ) Factorial(n)." << endl;
    cout << "2 ) Combination(n, k)." << endl;
}
