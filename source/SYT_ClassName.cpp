#include "SYT_ClassName.h"

SYT_ClassName::SYT_ClassName(const char *pName) : AreaObj(pName) {

}

void SYT_ClassName::init(const JMapInfoIter &rIter) {
    AreaObj::init(rIter);
    MR::connectToSceneAreaObj(this);
}

void SYT_ClassName::movement() {

}

const char* SYT_ClassName::getManagerName() const {
    return "SYT_ClassName";
}