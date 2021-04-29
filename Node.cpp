
#include "Node.h"

Node::Node(const shared_ptr<Tile>& tile) {
    this->tile = tile;
    this->next = nullptr;
    this->previous = nullptr;
}

Node::~Node() {
    this->tile.reset();
    this->next.reset();
    this->previous.reset();
}

Node::Node(const shared_ptr<Tile>& tile, const shared_ptr<Node>& next,
    const shared_ptr<Node>& previous) {
    this->tile = tile;
    this->next = next;
    this->previous = previous;
}

Node::Node(const Node& other) = default; //{
//    tile = make_shared<Tile>(*other.tile);
//    next = make_shared<Node>(*other.next);
//    previous = make_shared<Node>(*other.previous);
//
//    // TODO infinite recursion?
//}

bool operator==(const Node& node1, const Node& node2) {
    return node1.tile->colour == node2.tile->colour &&
        node1.tile->shape == node2.tile->shape;
}
