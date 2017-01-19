#ifndef CAMERA_H
#define CAMERA_H

#include "GameAssetManager.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "common.h"

class Camera{

public:

Camera();
glm::mat4 getView();
void cameraUp();
void translateCamera(GLfloat x, GLfloat y, GLfloat z);


private:

GLfloat x_pos, y_pos;

glm::vec3 cameraPosition, cameraFront;

glm:: mat4 viewMatrix;

};

#endif
