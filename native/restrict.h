#ifndef _RESTRICT_H_
#define _RESTRICT_H_
#include <string>

namespace Sandbox {
    typedef struct {
        bool success;
        std::string message = nullptr;
    } Result;

    const Result NOT_IMPLEMENTED = { false, "Sandboxing is not implemented for this platform" };
    const Result SUCCESS = { true, nullptr };

    Result activate();
};

#endif /* _RESTRICT_H_ */