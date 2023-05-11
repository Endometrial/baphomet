#ifndef MESH_H
#define MESH_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <engine/math.h>

#define VERTEX_ATTRUBUTES 5;

typedef struct Mesh {
	unsigned int vao;
	unsigned int elements;
} Mesh;

Mesh mesh_initialize();
Mesh mesh_add_vertices(Mesh mesh, GLenum mode, float* vertices, size_t size);
Mesh mesh_add_indexed_vertices(Mesh mesh, GLenum mode, float* vertices, size_t sizev, unsigned int* indices, size_t sizei);
void mesh_build();

#endif