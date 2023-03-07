#pragma once
#include <string>

class Shader
{
private:
    unsigned int id;
public:
    Shader(unsigned int id);
    ~Shader();

    void use();
};

extern Shader* load_shader(std::string vertexFile, std::string fragmentFile);

