#include "dictionary.h"

int main() {

	Dictionary dict;

	for (int i = 0; i < 100; i++)
	{
		dict.insert(i, "data_" + std::to_string(i));
	}

	dict.display();

}