#pragma once

#if defined(_WIN32)
    #if defined(Hello_EXPORTS)
        #define HELLO_EXPORT __declspec(dllexport)
    #else
        #define HELLO_EXPORT __declspec(dllimport)
    #endif
#else
    #define HELLO_EXPORT
#endif

class HELLO_EXPORT Hello
{
public:
    void print();
};
