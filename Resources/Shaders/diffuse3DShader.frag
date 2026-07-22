#version 330 core



// Outputs colors in RGBA
out vec4 FragColor;



//Inputs the colour from the vertex shader
in vec4 colour;
// Inputs the texture coordinates from the Vertex Shader
in vec2 texCoord;
in vec3 Normal;
in vec3 crntPos;


// Gets the Texture Unit from the main function
uniform sampler2D tex0;
uniform vec4 lightColour;
uniform vec3 lightPos;


void main()
{
	vec3 normal = normalize(Normal);
	vec3 lightDirection = normalize(lightPos - crntPos);

	float diffuse = max(dot(normal, lightDirection), 0.0f);

	FragColor = texture(tex0, texCoord) * lightColour * diffuse;
}