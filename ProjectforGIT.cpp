#include <iostream>
#include <vector>

using namespace std;

int main() {
	int triangle_a = 8;
	vector<char> triangle(triangle_a * triangle_a, '*');
	for (int i = 0; i < triangle.size(); i++) {
		if (i % triangle_a == triangle_a - 1) {
			cout << (i - (i / triangle_a * triangle_a) < i / triangle_a + 1 ? triangle[i] : ' ') << endl;
		}
		else {
			cout << (i - (i / triangle_a * triangle_a) < i / triangle_a + 1 ? triangle[i] : ' ') << ' ';
		}
	}
	return 0;
}