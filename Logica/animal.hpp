class Animal
{
  protected:
	int membros;
	int olhos;
	public:
		Animal(int _olhos, int _membros);
		~Animal();
		Animal* reproduz(Animal* b);
		int get_membros();
		int get_olhos();
};
