class ResizableArray
{
	public:
	ResizableArray();
	ResizableArray(int initialCapacity); // initial capacity
	ResizableArray(const ResizableArray &other);
	private:
	int capacity; //total number of elements before resize
	int size; //number of elements currently
	int *array;
};