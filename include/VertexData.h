#ifndef GAMEENGINE_VERTEXDATA_H
#define GAMEENGINE_VERTEXDATA_H

#include <glm/glm.hpp>

inline const glm::vec3 kPosition3[3] = {
    glm::vec3(-1.0f, -1.0f, 0.0f),
    glm::vec3(1.0f, -1.0f, 0.0f),
    glm::vec3(0.0f, 1.0f, 0.0f),
};

inline const glm::vec4 kColors[3] = {
    glm::vec4(1.0f, 0.0f, 0.0f, 1.0f),
    glm::vec4(0.0f, 1.0f, 0.0f, 1.0f),
    glm::vec4(0.0f, 0.0f, 1.0f, 1.0f),
};

#endif //GAMEENGINE_VERTEXDATA_H
