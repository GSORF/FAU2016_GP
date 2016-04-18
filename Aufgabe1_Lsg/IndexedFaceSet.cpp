#include "IndexedFaceSet.h"

IndexedFaceSet::IndexedFaceSet()
{
	//
}

IndexedFaceSet::~IndexedFaceSet()
{
	mVertices.clear();
	mTriangles.clear();
}

bool IndexedFaceSet::initFromFile(const std::string& filename)
{
	
	// TODO: Assignment 1.1 b)

	// TODO: Assignment 1.1 c)
	
	return true;
}

bool IndexedFaceSet::isBoundaryTriangle(unsigned int tId)
{
	// TODO: Assignment 1.1. d)

	return false;
}