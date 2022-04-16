#pragma once
#include <iostream>
#include <stdlib.h>

template <class T>
class Vector
{
	T* vector;
	int dimension;
	int count;

public:
	Vector();
	void push(const T& value);
	T& pop();
	void remove(int index);
	void insert(int index, const T& value);
	const T& get(const T& value)const; //const la final => does not modify any member variables of the class
	void set(const T& value, int index);
	int Count();
	void print();

};

template<class T>
inline Vector<T>::Vector()
{
	dimension = 200;
	count = 0;
	vector = new T[dimension];
}

template<class T>
inline void Vector<T>::push(const T& value)
{
	if (count < dimension - 1)
	{
		vector[count++] = value;
	}
	else
	{
		dimension = dimension * 2;
		T* copie = vector; //trb sa aloc memorie aici pt copie??
		memcpy(copie, vector, dimension / 2);
		copie[count++] = value;
		delete[] vector;
		vector = copie; //trb sa realoc memorie aici pt vector??
	}
}

template<class T>
inline T& Vector<T>::pop()
{
	//--count;
	return vector[count - 1];
}

template<class T>
inline void Vector<T>::remove(int index)
{
	if (index < count)
	{
		--count;
		for (int i = index; i < count; i++)
			vector[i] = vector[i + 1];
	}
}

template<class T>
inline void Vector<T>::insert(int index, const T& value)
{
	if (index <= count)
	{
		for (int i = count; i >= index; i--)
		{
			vector[i] = vector[i - 1];
		}
		vector[index] = value;
		++count;
	}
}

template<class T>
inline const T& Vector<T>::get(const T& value) const
{
	for (int i = 0; i < count; i++)
	{
		if (value == vector[i])
			return vector[i];
	}
}

template<class T>
inline void Vector<T>::set(const T& value, int index)
{
	if (index <= count)
		vector[index] = value;
}

template<class T>
inline int Vector<T>::Count()
{
	return count;
}

template<class T>
inline void Vector<T>::print()
{
	for (int i = 0; i < count; i++)
		std::cout << vector[i] << ' ';
	std::cout << '\n';
}
