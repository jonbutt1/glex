#ifndef GAMEASSET_H
#define GAMEASSET_H

#include <iostream>
#include <glm/glm.hpp>
#include <GL/gl.h>

class GameAsset {
 public:
  virtual void Draw(GLuint) = 0;
  void scaleModel(GLfloat x, GLfloat y, GLfloat z);
  void setModelColour(GLfloat r, GLfloat g, GLfloat b);
  glm::mat4 getModelMat();
  glm::vec3 getModelColour();

 private:
  glm::mat4 model = glm::mat4(1.0f);
  glm::vec3 model_colour = glm::vec3(1.0f, 1.0f, 1.0f);

};

#endif
