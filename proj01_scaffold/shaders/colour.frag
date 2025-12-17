#version 410

in vec3 colour_vert;
out vec4 colour_out;

void main()
{
    colour_out = vec4(colour_vert, 1.0);
}
