#ifndef HALFEDGE_H
#define HALFEDGE_H

#include <vector>

struct HEEdge
{
	// TODO: Assignment 1.3 a)
};

struct HEVertex
{
	// TODO: Assignment 1.3 a)
};

struct HETriangle
{
	// TODO: Assignment 1.3 a)
};

class HalfEdgeMesh
{

public:
	HalfEdgeMesh();
	~HalfEdgeMesh();
	void initFromIndexedFaceSet(const class IndexedFaceSet& ifs);
	void getVertexOneRing(unsigned int vId, std::vector<unsigned int>& out);

	// read only accessors
	const std::vector<HEEdge>& halfedges() const { return mHalfEdges; }
	const std::vector<HEVertex>& vertices() const { return mVertices; }
	const std::vector<HETriangle>& triangles() const { return mTriangles; }

protected:
	std::vector<HEEdge> mHalfEdges;
	std::vector<HEVertex> mVertices;
	std::vector<HETriangle> mTriangles;
};

#endif