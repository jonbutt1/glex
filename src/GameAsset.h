#ifndef GAMEASSET_H
#define GAMEASSET_H

#include <iostream>
#include <glm/glm.hpp>
#include <GL/gl.h>

class GameAsset {
 public:
  virtual void Draw(GLuint) = 0;
  void scaleModel(GLfloat x, GLfloat y, GLfloat z);
  glm::mat4 getModelMat();

 private:
    glm::mat4 model = glm::mat4(1.0f);

};

#endif
