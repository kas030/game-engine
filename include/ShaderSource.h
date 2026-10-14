#ifndef GAMEENGINE_SHADERSOURCE_H
#define GAMEENGINE_SHADERSOURCE_H

inline auto vertex_shader_text = R"(#version 110
uniform mat4 u_mvp;
attribute vec3 a_pos;
attribute vec4 a_color;
varying vec4 v_color;
void main() {
    gl_Position = u_mvp * vec4(a_pos, 1.0);
    v_color = a_color;
}
)";

inline auto fragment_shader_text = R"(#version 110
varying vec4 v_color;
void main() {
    gl_FragColor = v_color;
}
)";

#endif //GAMEENGINE_SHADERSOURCE_H
