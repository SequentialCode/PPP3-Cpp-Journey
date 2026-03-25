#include "ResizableArray.h"
ResizableArray::ResizableArray()
{
	capacity = 10;
	size = 0;
	array = new int[capacity];
}

ResizableArray::ResizableArray(int initialCapacity)
{
	if(initialCapacity > 0)
	{
		capacity = initialCapacity;
	}
	else
	{
		capacity = 10;
	}
	size = 0;
	array = new int[capacity];
}

ResizableArray::ResizableArray(const ResizableArray& other)
{
	capacity = other.capacity;
	size = other.size;
	
	//Perform a deep copy
	array = new int[capacity];
	for (int i = 0; i < size; i++)
	{
		array[i] = other.array[i];
	}
}