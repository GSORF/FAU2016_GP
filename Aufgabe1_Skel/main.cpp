#include <iostream>
#include <string>
#include "TriangleSoup.h"
#include "IndexedFaceSet.h"
#include "Halfedge.h"

int main(int argc, char ** argv)
{
	std::string filenameSoup = "bunnySoup.txt";
	std::string filenameIfs = "bunnyIFS.off";
	
	// triangle soup
	std::cerr << "Loading " << filenameSoup << " into triangle soup.\n";
	TriangleSoup triSoup;
	triSoup.initFromFile(filenameSoup);
	std::cerr << "num of triangles: " << triSoup.triangles().size() << std::endl;

	// indexed face set
	std::cerr << "Loading " << filenameIfs << " into indexed face set.\n";
	IndexedFaceSet ifs;
	ifs.initFromFile(filenameIfs);
	std::cerr << "num of vertices: " << ifs.vertices().size() << std::endl;
	std::cerr << "num of triangles: " << ifs.triangles().size() << std::endl;

	// halfedge data
	std::cerr << "Loading indexed face set to halfedge.\n";
	HalfEdgeMesh he;
	he.initFromIndexedFaceSet(ifs);
	std::cerr << "num of halfedges: " << he.halfedges().size() << std::endl;
	std::cerr << "num of vertices: " << he.vertices().size() << std::endl;
	std::cerr << "num of triangles: " << he.triangles().size() << std::endl;
	
	return 0;
}