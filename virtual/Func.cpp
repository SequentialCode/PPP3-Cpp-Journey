import std;

int add(int a, int b)
{
   return a + b;
}

int multiply(int a, int b)
{
   return a * b;
}

int main1()
{
   int(*operationPtr)(int, int) = &add;
   std::cout << "Add 5 and 3 :" << (*operationPtr)(5, 3) << std::endl;
   operationPtr = &multiply;
   std::cout << "Multiply 5 and 3 :" << (*operationPtr)(5, 3) << std::endl;

   int i = 10, j = 20;
   int *intPtr = &i;
   std::cout << *intPtr << std::endl;
   intPtr = &j;
   std::cout << *intPtr << std::endl;
   
   return 0;
}
