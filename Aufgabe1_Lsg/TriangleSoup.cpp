#include "TriangleSoup.h"

TriangleSoup::TriangleSoup()
{
	mTriangles.clear();
}

TriangleSoup::~TriangleSoup()
{
	mTriangles.clear();
}

//source: http://ysonggit.github.io/coding/2014/12/16/split-a-string-using-c.html
std::vector<std::string> split(const std::string &s, char delim) {
    std::stringstream ss(s);
    std::string item;
    std::vector<std::string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

bool TriangleSoup::initFromFile(const std::string& filename)
{
	// TODO: Assignment 1.1 b)
	std::string line;
	unsigned int number_of_triangles;
	
	
	//open file
	ifstream myfile (filename);
	if (myfile.is_open())
	{
		//read header (number of triangles)
		if( getline (myfile,line) )
		{
			//Convert from string to int
			number_of_triangles = std::stoi(  line );
		}
		
		int triangle = 0;
		
		//loop through vertices and add to triangle

		while ( triangle < number_of_triangles )
		{
			Vertex v1;
			Vertex v2;
			Vertex v3;
		
		
			//First Vertex
			getline (myfile,line);
			
			v1.x = ;
			v1.y = ;
			v1.z = ;
			
			//Second Vertex
			getline (myfile,line);
			
			
			
			//Third Vertex
			getline (myfile,line);
		
			Triangle newTriangle;
			newTriangle.p1 = vertex1;
			newTriangle.p2 = vertex2;
			newTriangle.p3 = vertex3;
			
		
			if(i < 3)
			{
			mTriangles.push_back();
			}
		
			i++;
			
			
			
			
			//cout << line << '\n';
			
		}
		
	
	
	
	
	
	
	//close file
	myfile.close();
	}
	
	
	
	return true;
}