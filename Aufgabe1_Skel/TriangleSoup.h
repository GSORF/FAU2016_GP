#ifndef TRIANGLESOUP_H
#define TRIANGLESOUP_H

#include <vector>
#include "Types.h"

struct Triangle
{
	// TODO: Assignment 1.1 a)
};

class TriangleSoup
{
public:
	TriangleSoup();
	~TriangleSoup();

	bool initFromFile(const std::string& filename);
	
	// read only accessors
	const std::vector<Triangle>& triangles() const { return mTriangles; }
	
protected:
	std::vector<Triangle> mTriangles;
};

#endif