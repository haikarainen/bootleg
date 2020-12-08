
#pragma once 

#include <WIR/Math.hpp>

namespace bootleg
{
  // The reference resolution (what we design towards)
  static const glm::uvec2 referenceResolution{1920, 1080};

  // The actual target resolution
  static const glm::uvec2 targetResolution{1280, 720};


  glm::vec2 targetSpace(glm::vec2 const &p);
  float targetSpace(float p);
}