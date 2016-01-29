//
//  secondControllerMacro.h
//  mspAVUgen
//
//  Created by msp on 12/03/2014.
//
//

#ifndef __Primitives__secondControllerMacro__
#define __Primitives__secondControllerMacro__

#include "controllerMacro.h"


namespace msp {
    class avUgen; // forward declaration
    class secondControllerMacro : public controllerMacro {
    public:
        double applyRelative(avUgen& _avUgen, int _value);
        double applyAbsolute(avUgen& _avUgen, int _value);
    };
}

#endif
