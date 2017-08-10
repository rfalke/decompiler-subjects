#include <vector>

void f(std::vector<int> &a, const std::vector<int> &b) {
	a.insert(a.end(), b.begin(), b.end());
}

int main() {}
