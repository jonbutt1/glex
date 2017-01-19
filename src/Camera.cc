#include "GameAssetManager.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Camera.h"




  


Camera::Camera(){
x_pos=0.0f;
y_pos=0.0f;
cameraPosition = glm::vec3(x_pos, y_pos, 2.0f);
cameraFront = glm::vec3(0.0f, 0.0f, 1.0f);
viewMatrix=glm::lookAt(cameraPosition,cameraFront,glm::vec3(0.0f,1.0f,0.0f));
}



glm::mat4 Camera::getView(){
return viewMatrix;
}
void Camera::translateCamera(GLfloat x, GLfloat y, GLfloat z){

glm::mat4 translate;

translate[3][0]+=x;
translate[3][1]+=y;
translate[3][2]+=z;

viewMatrix*=translate;
}
