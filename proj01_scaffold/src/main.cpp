#include <iostream>
#include "glad/glad.h"
#include <GLFW/glfw3.h>

void initTriangle()
{
    GLfloat verts[] = {
-1.0f, -1.0f,
1.0f, -1.0f,
0.0f, 1.0f,
    };

    GLuint bufID;
    glGenBuffers(1, &bufID);
    glBindBuffer(GL_ARRAY_BUFFER, bufID);

    glBufferData(GL_ARRAY_BUFFER, sizeof(verts), verts, GL_STATIC_DRAW);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);
}

// TODO: draw triangle
void drawTriangle()
{
    glColor3f(1.0f, 0.0f, 0.0f);
    glDrawArrays(GL_TRIANGLES, 0, 3);


}

int main()
{
    GLFWwindow *window;

    // GLFW init
    if (!glfwInit())
    {
        return -1;
    }

    // create a GLFW window
    window = glfwCreateWindow(640, 480, "Hello OpenGL1", NULL, NULL);
    glfwMakeContextCurrent(window);

    // loading glad
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Couuldn't load opengl" << std::endl;
        glfwTerminate();
        return -1;
    }

    // TODO: call initTriangle()
	initTriangle(); 

    // TODO: set the background colour using glClearColor(r, g, b, a)
    glClearColor(0.2f, 0.3f, 0.4f, 1.0f);

    // setting the event loop
    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
        glClear(GL_COLOR_BUFFER_BIT);
        // TODO : clear the background colour and call drawTriangle()
        drawTriangle();
        glfwSwapBuffers(window);
    }

    glfwTerminate();

    return 0;
}