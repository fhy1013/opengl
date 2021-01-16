#include "test.h"

#include <iostream>
#include <string>
// extern "C" {}

#include <GL/gl.h>

#include "GLFW/glfw3.h"
// #include "KHR/khrplatform.h"

void Test() {
    GLFWwindow* window;

    if (!glfwInit()) return;

    window = glfwCreateWindow(480, 320, "TestOpenGL", NULL, NULL);

    if (!window) {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glBegin(GL_TRIANGLES);

        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(0.0, 1.0, 0.0);

        glColor3f(0.0, 1.0, 0.0);
        glVertex3f(-1.0, -1.0, 0.0);

        glColor3f(1.0, 0.0, 1.0);
        glVertex3f(1.0, -1.0, 0.0);

        glEnd();

        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    glfwTerminate();
    std::cout << __func__ << " end" << std::endl;
    getchar();
}