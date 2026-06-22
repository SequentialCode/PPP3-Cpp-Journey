import std;

struct Point
{
   int x = 0;
   int y = 0;
};

class Shape 
{
   protected:
   //parameterized constrcutor with default arg
    Shape(std::initializer_list<Point> lst = {}) : vertices {lst}
    {
      std::cout << "Created a shape with " << vertices.size() << " vertices.\n";
    }
    private:
    std::vector<Point> vertices;
};

class Circle : public Shape
{
   public:
   Circle(int id)// Call the base class constructor with an empty initializer list
   {
      std::cout << "Created a circle.\n";
   }
 
};

int main()
{
   Circle c{1};
   Shape s; //locked away shape so that only using derived classes you create shapes
}

