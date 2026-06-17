import std;

class Animal
{

public:
   void makeSound()
   {
      std::cout << "Generic noise!";
   }
};

class Dog : public Animal
{
   public:
   void makeSound()
   {
      std::cout << "Bow, bow";
   }
};
