#ifndef _array_
#define _array_
#include <iostream>

template <typename T>
class Array
{
	private:
		T* elements;
		unsigned int _size;

	public:
		Array() {
			elements = new T;
			*elements = 0;
			_size = 0;
		}
		Array(unsigned int n)
		{
			elements = new T[n];
			_size = n;
			for (unsigned int i = 0; i < n; i++)
				elements[i] = 0;
		}
		Array(Array const &other) {
			elements = new T[1];
			*this = other;
		}
		~Array() {
			delete[] elements;
		}

		Array &operator=(Array const &other)
		{
			if (this == &other)
				return *this;
			delete[] elements;
			_size = other._size;
			elements = new T[other._size];
			for (unsigned int i = 0; i < _size; i++)
				elements[i] = other.elements[i];
			return *this;
		}

		T &operator[](unsigned int where)
		{
			if (where >= _size)
				throw invalidRead();
			return elements[where];
		}

		unsigned int size() const {
			return _size;
		}

		class invalidRead : public std::exception
		{
			public:
				virtual const char	*what() const throw(){return("Invalid index");};
		};
};

#endif
