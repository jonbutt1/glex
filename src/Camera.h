#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "common.h"
#include "GameAssetManager.h"

class Camera{

 public:
 Camera();
 glm::mat4 getView();
 void cameraUp();
 void translateCamera(GLfloat x, GLfloat y, GLfloat z);

 private:
 GLfloat x_pos, y_pos, z_pos;
 glm::vec3 cameraPosition, cameraTarget;
 glm:: mat4 viewMatrix;
};

#endif
