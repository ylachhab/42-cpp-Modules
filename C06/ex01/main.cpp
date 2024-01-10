#include "Serializer.hpp"

int main(){
	Data ptr;
	uintptr_t nbr;

	ptr.index = 1546;
	nbr = Serializer::serialize(&ptr);
	Data *tmp = Serializer::deserialize(nbr);
	std::cout << tmp->index << std::endl;
}