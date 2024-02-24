#include <random>
#include <vector>

class Utility {
public:
	static int RandomInt(int low, int high) {
		std::random_device rd;		// Random device
		std::mt19937 gen(rd());		// Seed it

		// Set the range
		std::uniform_int_distribution<> dist(low, high);

		return dist(gen);
	}
};
