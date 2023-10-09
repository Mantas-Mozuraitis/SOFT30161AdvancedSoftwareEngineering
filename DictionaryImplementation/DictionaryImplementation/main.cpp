#include "dictionary.h"

int main() {

	Dictionary dict;
	dict.insert(22,"Mantas");
	dict.insert(2, "Matas");
	dict.insert(34, "Maas");
	dict.insert(56, "ntas");
	dict.insert(1, "ntas");
	dict.insert(12, "s");
	dict.insert(17, "Ma");
	dict.insert(4, "Mantas");
	dict.insert(3, "Matas");
	dict.insert(-4, "Maas");
	dict.insert(25, "ntas");
	dict.insert(8, "ntas");
	dict.insert(10, "s");
	dict.insert(98, "Ma");


	dict.display();

	dict.insert(22, "new");
	dict.display();


}