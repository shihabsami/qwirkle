
#ifndef ASSIGN2_TILE_H
#define ASSIGN2_TILE_H

#include <ostream>

// Define a Colour type
typedef char Colour;

// Define a Shape type
typedef int Shape;

class Tile {
public:
    Tile(Colour color, Shape shape);
    bool operator==(const Tile& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Tile& tile);

    Colour colour;
    Shape shape;
};

#endif // ASSIGN2_TILE_H