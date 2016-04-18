#include "Halfedge.h"
#include "IndexedFaceSet.h"

HalfEdgeMesh::HalfEdgeMesh()
{
	//
}

HalfEdgeMesh::~HalfEdgeMesh()
{
	mHalfEdges.clear();
	mVertices.clear();
	mTriangles.clear();
}

void HalfEdgeMesh::initFromIndexedFaceSet(const IndexedFaceSet& ifs)
{
	// TODO: Assignment 1.3 b)
}

void HalfEdgeMesh::getVertexOneRing(unsigned int vId, std::vector<unsigned int>& out)
{
	// TODO: Assignment 1.3 c)
}
