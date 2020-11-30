#include "sources/game/objects/armor/armorfactory.h"


sharedObject ArmorFactory::createObject() {
    return std::make_shared<Armor>(1);
}


sharedObject ArmorFactory::createArmor(int protectionValue) {
    return std::make_shared<Armor>(protectionValue);
}
