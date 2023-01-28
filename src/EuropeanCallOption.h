#include<vector>

class EuropeanCallOption{
public:

	//constructor
	EuropeanCallOption(
		int nInt_,
		double strike_,
		double spot_,
		double vol_,
		double r_,
		double expiry_,
		double barrier_
		);

	//destructor
	~EuropeanCallOption(){};

	//methods
	void generatePath();
	double getMin();
	//void printPath();
	double downInPrice(int nReps);
	//double operator()(char char1, char char2, int nReps);
	
	//members
	std::vector<double> thisPath;
	int nInt;
	double strike;
	double spot;
	double vol;
	double r;
	double expiry;
	double barrier;

};
