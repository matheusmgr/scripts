#include"./animal.hpp" 
 
 Animal:: Animal(int _olhos, int _membros)
{
   	olhos= _olhos;
   	membros= _membros;
}
 Animal::~Animal(){}
 int Animal::get_membros()
{
 return membros;
}
 int Animal::get_olhos()
{
 return olhos;
}
 Animal* Animal::reproduz(Animal* b)
{
	if((olhos==b->get_olhos())&&(membros==b->get_membros());
		return new Animal(olhos, membros);
	return NULL;
 };
