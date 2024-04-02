#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>

class TestCaseGenerator {
public:
	TestCaseGenerator() {
		std::srand((int)std::time(nullptr));
	}

	std::string generateCalcExpression(int maxDepth) {
		std::stringstream ss;
		ss << (rand() % 1000);

		for (int depth = 1; depth <= maxDepth; ++depth) {
			std::stringstream tmp;
			tmp << "(" << ss.str() << " " << chooseOperator() << " " << rand() % 1000 << ")";
			ss = std::move(tmp);
		}

		return ss.str();
	}

private:
	char chooseOperator() {
		return ops[rand() % 4];
	}
	std::vector<char> ops = { '+', '-', '*', '/' };
};
