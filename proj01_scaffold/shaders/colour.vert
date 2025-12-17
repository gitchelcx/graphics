#version 410

layout(location=0) in vec3 pos;
layout(location=1) in vec3 colour_in;

out vec3 colour_vert;

void main()
{
    gl_Position = vec4(pos, 1.0);
    colour_vert = colour_in;
}



