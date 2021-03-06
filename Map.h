#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include "TileType.h"

class Map
{
  public:
	Map();
	~Map();

	const unsigned int getWidth() const;
	const unsigned int getHeight() const;
	const float getTileSize() const;
	void load(const std::string &level_file);
	const TileType &at(unsigned int x, unsigned int y) const;
	void set(unsigned int x, unsigned int y, TileType type);

	void draw(sf::RenderTarget &target, sf::RenderStates &states);

  private:
	unsigned int m_width;
	unsigned int m_height;
	float m_tileSize;
	std::vector<std::vector<TileType>> m_grid;
	sf::VertexArray m_vertices;
};
