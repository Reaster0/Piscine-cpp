#include <iostream>

struct Data {
	void *raw;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr->raw);
}

Data* deserialize(uintptr_t raw) {
	Data *temp = new Data;
	temp->raw = reinterpret_cast<void *>(raw);
	return temp;
}

int main() {
	int test = 42;
	Data *daty = deserialize(test);
	std::cout << serialize(daty) << std::endl;
}