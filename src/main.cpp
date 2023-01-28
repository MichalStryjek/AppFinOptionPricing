#include <Rcpp.h>
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
#include"EuropeanCallOption.h"

using namespace Rcpp;
using std::vector;
using std::cout;
using std::cin;


// [[Rcpp::export]]

double downInPrice(int nInt,double strike,double spot,double vol, double r,double expiry,double barrier, long int reps){

	// set the seed
	srand( time(NULL) );


	EuropeanCallOption myEuropeanCall(nInt, strike, spot, vol, r,expiry, barrier);

	return myEuropeanCall.downInPrice(reps);
}
