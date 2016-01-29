//
//  fourthControllerMacro.h
//  mspAVUgen
//
//  Created by matt on 13/03/2014.
//
//

#ifndef __Primitives__fourthControllerMacro__
#define __Primitives__fourthControllerMacro__

#include "controllerMacro.h"

namespace msp {
    class avUgen; // forward declaration
    class fourthControllerMacro : public controllerMacro {
    public:
        double applyRelative(avUgen& _avUgen, int _value);
        double applyAbsolute(avUgen& _avUgen, int _value);
    };
}
#endif
