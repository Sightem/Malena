//
// Created by Dave R. Smith on 3/9/25.
//

#ifndef FONTMANAGER_H
#define FONTMANAGER_H


#include <map>
#include <iostream>
#include "SFML/Graphics/Font.hpp"

class FontManager {
public:
  enum Font
  {
    ARIAL
  };

  static const sf::Font &DEFAULT;
  static const sf::Font &getFont(Font font);
  void operator()(Font font);
private:
  inline static std::map<Font, sf::Font> fonts;
  static void loadFont(Font font);
  static std::string getPath(Font font);
};



#endif //FONTMANAGER_H
