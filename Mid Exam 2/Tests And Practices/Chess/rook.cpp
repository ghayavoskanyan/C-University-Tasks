#include "movement.h"

class Rook {
public:
    void move () {
        Movement::moveHorizontal (3);
        Movement::moveVertical (2);
    }
};
