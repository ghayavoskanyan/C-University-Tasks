#include "movement.h"

class Queen {
public:
    void move () {
        Movement::moveHorizontal (4);
        Movement::moveVertical (1);
        Movement::moveDiagonal (2);
    }
};
