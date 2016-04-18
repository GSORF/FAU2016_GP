#ifndef INDEXEDFACESET_H
#define INDEXEDFACESET_H

#include <vector>
#include "Types.h"

struct IFSTriangle
{
	// TODO: Assignment 1.2 a)
};

class IndexedFaceSet
{

public:
	IndexedFaceSet();
	~IndexedFaceSet();

	bool initFromFile(const std::string& filename);
	bool isBoundaryTriangle(unsigned int tId);
	
	// read only accessors
	const std::vector<Vertex>& vertices() const { return mVertices; }
	const std::vector<IFSTriangle>& triangles() const { return mTriangles; }

protected:
	std::vector<Vertex> mVertices;
	std::vector<IFSTriangle> mTriangles;
};

#endif