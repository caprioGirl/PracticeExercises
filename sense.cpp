
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
