#pragma once
#include "Satellites.h"
#include "Sprite.h"
#include "UIElement.h"

#include <list>
#include <memory>

class Map : public UIElement {
public:
  Map(SDL_Rect rect, PState state, int &zoom);
  bool isClicked(const SDL_MouseButtonEvent e, PState &state) override;
  void render() override;

private:
  std::shared_ptr<Sprite> map;
  std::shared_ptr<Sprite> cleanMap;
  SDL_Rect source;
  int &zoom;
  void zoomOut();
  void clampToBorder();
  void zoomIn(const SDL_MouseButtonEvent &e);
};
