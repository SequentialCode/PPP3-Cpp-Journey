import std;

struct Point
{
   int x = 0;
   int y = 0;
};

class Shape 
{
   public:
   //parameterized constrcutor with default arg
    Shape(std::initializer_list<Point> lst = {}) : vertices {lst}
    {
      std::cout << "Created a shape with " << vertices.size() << " vertices.\n";
    }
    
    private:
    std::vector<Point> vertices;
};

int main()
{
   Shape d;
   Shape d1{};
   Shape point {{0,0}};
   Shape line {{0,0}, {5, 5}};
   Shape triangle { {0,0}, {4,0}, {2, 3}};
   Shape square { {0,0}, {4,0}, {4,4}, {0,4} };
   Shape pentagon { {2,4}, {4,2}, {3,0}, {1,0}, {0,2}};
   Shape hexagon { {1,3}, {3,3}, {4,1}, {3,-1}, {1,-1}, {0,1}};
   Shape octagon { {1,3}, {2,3}, {3,2}, {3,1}, {2,0}, {1,0}, {0,1}, {0,2}};
}

