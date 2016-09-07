#include "VectorMath.h"

sf::Vector3f cross(const sf::Vector2f& A, const sf::Vector2f& B)
{
	sf::Vector3f newA(A.x, A.y, 0.0f);
	sf::Vector3f newB(B.x, B.y, 0.0f);
	return cross(newA, newB);
}


/// Returns the result of a cross product of two 3D vectors.
//
//param:
//A -> (x1, y1, z1)
//B -> (x2, y2, z2)
//
//|i  j  k |
//|x1 y1 z1|
//|x2 y2 z2|
//
sf::Vector3f cross(const sf::Vector3f& A, const sf::Vector3f& B)
{
	sf::Vector3f result;
	result = sf::Vector3f(determinant(A.y, A.z, B.y, B.z),
		determinant(A.x, A.z, B.x, B.z),
		determinant(A.x, A.y, B.x, B.y));
	return result;
}

///Returns the determinant of a 2D matrix given the points as such.
//
//| a b |
//| c d |
//
//ad - bc
float determinant(float a, float b, float c, float d)
{
	return a*d - b*c;
}

float dot(const sf::Vector2f& A, const sf::Vector2f& B)
{
	return A.x*B.x + A.y*B.y;
}

float dot(const sf::Vector3f& A, const sf::Vector3f& B)
{
	return A.x*B.x + A.y*B.y + A.z*B.z;
}

float magnitude(const sf::Vector2f & A)
{
	return 0.0f;
}

float magnitude(const sf::Vector3f & A)
{
	return 0.0f;
}
