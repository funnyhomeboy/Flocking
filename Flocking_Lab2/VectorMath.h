#pragma once
#include <SFML/Graphics.hpp>

sf::Vector3f cross(const sf::Vector2f& A, const sf::Vector2f& B);
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
sf::Vector3f cross(const sf::Vector3f& A, const sf::Vector3f& B);

///Returns the determinant of a 2D matrix given the points as such.
//
//| a b |
//| c d |
//
//ad - bc
float determinant(float a, float b, float c, float d);

float dot(const sf::Vector2f& A, const sf::Vector2f& B);

float dot(const sf::Vector3f& A, const sf::Vector3f& B);
