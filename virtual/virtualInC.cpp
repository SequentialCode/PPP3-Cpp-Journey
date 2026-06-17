import std;

struct ShapeVTable;
struct Shape;
struct Circle;

struct ShapeVTable 
{
   void (*draw)(Shape* self); //pointer to function returning nothing and receiving a Shape ptr
};

struct Shape
{
   ShapeVTable* vptr; //Shape has a vptr
   int x,y;
};

void Shape_draw(Shape* shape)
{
   std::cout << "Drawing a generic Shape at (" << shape->x << ", " << shape->y << ")\n"; //accesses members from Shape
}

ShapeVTable shape_vtable_instance = { &Shape_draw};

void Shape_Constructor(Shape* shape, int x, int y)
{
   shape-> vptr = &shape_vtable_instance;
   shape-> x = x;
   shape-> y = y;
}

struct Circle
{
   Shape base;
   int radius;
};

void Circle_draw(Shape* shape)
{
   Circle *circle = (Circle*) shape;
   std::cout << "Drawing a circle with radius " << circle->radius << " at (" << shape->x << ", " << shape->y << ")\n";
}

ShapeVTable circle_vtable_instance = { &Circle_draw};

void Circle_Constrcutor(Circle *circle, int x, int y, int radius)
{
Shape_Constructor(&circle->base, x, y);
circle->base.vptr = &circle_vtable_instance;
circle->radius = radius;
}

int main()
{
   Shape myShape;
   Shape_Constructor(&myShape, 10, 20);

   Circle myCircle;
   Circle_Constrcutor(&myCircle, 50, 60, 15);

   Shape* shapes[2];
   shapes[0] = &myShape;
   shapes[1] = (Shape*) &myCircle;

   std::cout << "--- Iterating through the shapes polymorphically ---\n";
   for(int i = 0; i < 2; i++)
   {
      shapes[i]->vptr->draw(shapes[i]);
   }
}
