#include "GameAssetManager.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Camera.h"

Camera::Camera(){
viewMatrix=glm::mat4();
}

glm::mat4 Camera::getView(){
return viewMatrix;
}
/*
* Translates the view matrix to move the camera.
*/
void Camera::translateCamera(GLfloat x, GLfloat y, GLfloat z){

viewMatrix = glm::translate(this->viewMatrix, glm::vec3(x, y, z));

}
