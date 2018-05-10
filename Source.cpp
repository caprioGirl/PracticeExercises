#include<iostream>
#include<vector>
#include<string>

using namespace std;

//ALL HEADER FILES
#include"sense.h"

//GLOBAL VARIABLES DECLARATIONS
float pHit = 0.6, pMiss = 0.2, pExact = 0.8, pOvershoot = 0.1, pUndershoot = 0.1;
vector <float> p(5, 0.2);
vector <string> world(5), measurements(2);
vector <int> motions(2, 1);

int main() {
	
	world[0] = "green";
	world[1] = "red";
	world[2] = "red";
	world[3] = "green";
	world[4] = "green";

	measurements[0] = "red";
	measurements[1] = "green";

	for (int i = 0; i < measurements.size(); ++i) {
		vector<float> val = sense(p, measurements[i]);
		cout<< val[0];
		cin.get();
	}
	return 0;
}

/*
vector<float> sense(vector<float> p, string Z) {

	vector<float> result;
	float sum = 0, updatedProb;

	for (int i = 0; i < world.size(); i++) {
		bool hit = (Z.compare(world[i]));
		updatedProb = ((hit* pHit*p[i]) + ((1 - hit)*pMiss*p[i]));
		result.push_back(updatedProb);
		sum += updatedProb;
	}

	for (int i = 0; i < world.size(); i++) {
		result[i] = result[i] / sum;
	}

	return result;
}
*/