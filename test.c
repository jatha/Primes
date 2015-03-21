#include <iostream>

int main() {
	bool numbers[100000] = {}; //true if dividebale
	for(int i = 1; i < sizeof(numbers); i++) {
		for(int j = 2; j < i-1; j++) {
			//std::cout << i << "%" << j << "=" << i%j << "\n";
			if(i % j == 0) {
				numbers[i] = true;
				break;
			}
		}
	}
	//computing done

	for(int i = 1; i < sizeof(numbers); i++) {
		if(!numbers[i]) {
			std::cout << i << "\n";
		}
	}
}
