#include"./animal.hpp"
int main(void)
{
  Animal* a= new Animal(2,4);
  Animal* b= new Animal(2,4);
  Animal* c= a->reproduz(b);
  return 1;
}
