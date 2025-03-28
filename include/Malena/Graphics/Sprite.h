
#ifndef SPRITE_H
#define SPRITE_H

#pragma once

#include "Shape.h"

namespace ml
{
	class Sprite : public virtual Shape<sf::Sprite>
	{
		using Shape::Shape;
	};


} // namespace ml
#endif // SPRITE_H
