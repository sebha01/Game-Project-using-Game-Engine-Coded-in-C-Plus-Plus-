#include "Config.h"

class Renderer
{
	private:
		//2D shapes 
		float Triangle2DVertices[9] = {
		-0.5f, -0.5f, 0.0f,
		 0.5f, -0.5f, 0.0f,
		 0.0f,  0.5f, 0.0f
		};

	//3D shapes


public:
	//Constructor and Destructor
	Renderer();
	~Renderer();

	//2D
	void drawTriangle();
};