#ifndef MTPL_SRC_LIB_TYPES_HPP
#define MTPL_SRC_LIB_TYPES_HPP

#ifdef _WIN32

using int8_t = char;
using uint8_t = unsigned char;

    #ifdef _WIN64

    using int16_t = short;
    using uint16_t = short;

    using int32_t = int;
    using uint32_t = unsigned int;

    using int64_t = long long;
    using uint64_t = unsigned long long;

    using float32_t = float;
    using float64_t = double;
    #endif //_WIN64
#elif __gnu_linux__

#endif //_WIN32

#endif //MTPL_SRC_LIB_TYPES_HPP