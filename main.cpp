#include <iostream>
#include <GL/glew.h>
#include "display.h"
#include "shaders.h"
#include "mesh.h"

using namespace std;

int main()
{
    Display display(800, 600, "Hello World");

    Shader shader("./res/basicShader");

    Vertex verticies[] = { Vertex(glm::vec3(-0.5, -0.5, 0)),
                           Vertex(glm::vec3(0, 0.5, 0)),
                           Vertex(glm::vec3(0.5, -0.5, 0)) };

    Mesh mesh(verticies, sizeof(verticies)/sizeof(verticies[0]));

    while (!display.isClosed())
    {
        display.Clear(0.0f, 0.15f, 0.3f, 1.0f);
        shader.Bind();
        mesh.Draw();
        display.update();
    }

    return 0;
}
