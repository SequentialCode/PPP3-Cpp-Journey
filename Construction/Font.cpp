import std;

struct Font
{
	enum Font_type
	{
		screen, screen_bold,
		weird
	};
	int getf_asint () const//const, a getter, since it doesn't modify *this
	{
		return f;
	}
	Font() : f { screen } { } //constructor overrides in-class initialization
	private:
	int f=Font_type::weird;
	
};

int main()
{
	Font f1;
	std::cout << f1.getf_asint();
}