#include<iostream>
#include<cmath>
#include"getOneGaussianByBoxMueller.h"
#include"EuropeanCallOption.h"


//definition of constructor
EuropeanCallOption::EuropeanCallOption(
	int nInt_,
	double strike_,
	double spot_,
	double vol_,
	double r_,
	double expiry_,
	double barrier_)
	{
		nInt = nInt_;
		strike = strike_;
		spot = spot_;
		vol = vol_;
		r = r_;
		expiry = expiry_;
		barrier = barrier_;
		generatePath();
	}

//method definition


//method definition
void EuropeanCallOption::generatePath(){
	double thisDrift = (r * expiry - 0.5 * vol * vol * expiry) / double(nInt);
	double cumShocks = 0;
	thisPath.clear();

	for(int i = 0; i < nInt; i++){
		cumShocks += (thisDrift + vol * sqrt(expiry / double(nInt)) * getOneGaussianByBoxMueller());
		thisPath.push_back(spot * exp(cumShocks));
	}
}

//method definition
double EuropeanCallOption::getMin(){

	double minval = thisPath[0];
	int thisSize = thisPath.size();

	for(int i = 1; i < thisSize; i++){
		if (minval > thisPath[i]){
			minval=thisPath[i];
		}
	}

	return minval;
}


//method definition
double EuropeanCallOption::downInPrice(int nReps){

	double rollingSum = 0.0;
	double thisMin ;

	for(int i = 0; i < nReps; i++){
		generatePath();
		thisMin=getMin();

		rollingSum += ((thisMin < barrier ) && (thisPath[nInt-1])-strike>0) ? (thisPath[nInt-1]-strike) : 0;
	}

	return exp(-r*expiry)*rollingSum/double(nReps);

}


