// // #include <iostream>
// // #include <cstdint>  // For int8_t, uint64_t etc.

// // int main() {
// //     // --- Integer Types ---
// //     short s = 1000;                     // Range: -32,768 to 32,767
// //     unsigned short us = 50000;         // Range: 0 to 65,535
// //     int i = -100000;                   // Range: -2,147,483,648 to 2,147,483,647
// //     unsigned int ui = 3000000000;      // Range: 0 to 4,294,967,295
// //     long l = 1000000000;               // Usually same as int or 64-bit on some systems
// //     unsigned long ul = 4000000000;     // 0 to 4,294,967,295 or higher (platform-dependent)
// //     long long ll = -9223372036854775807; // Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
// //     unsigned long long ull = 18446744073709551615u; // Range: 0 to 18,446,744,073,709,551,615

// //     // --- Fixed-Width Integers ---
// //     int8_t i8 = -100;                  // Range: -128 to 127
// //     uint8_t u8 = 200;                  // Range: 0 to 255
// //     int32_t i32 = -100000;            // Range: -2,147,483,648 to 2,147,483,647
// //     uint64_t u64 = 9999999999;        // Range: 0 to 18,446,744,073,709,551,615

// //     // --- Floating Point Types ---
// //     float f = 3.14f;                   // Range: ±3.4e38, Precision: ~6-7 digits
// //     double d = 2.718281828;           // Range: ±1.7e308, Precision: ~15-16 digits
// //     long double ld = 1.4142135623730951; // Extended precision, platform-dependent (e.g., 80-bit)

// //     // --- Boolean Type ---
// //     bool flag = true;                 // Only two values: true (1) or false (0)

// //     // --- Character Types ---
// //     char c = 'A';                     // ASCII 65, Range: -128 to 127 or 0 to 255
// //     unsigned char uc = 200;          // Range: 0 to 255
// //     wchar_t wc = L'Ж';               // Unicode wide char, typically 2 or 4 bytes
// // }




// #include <iostream>
// #include <limits>
// #include <cstdint>  // For int8_t, uint64_t, etc.

// int main() {
//     std::cout << "--- Integer Types ---\n";
//     std::cout << "short: [" << std::numeric_limits<short>::min() << ", " << std::numeric_limits<short>::max() << "]\n";
//     std::cout << "unsigned short: [0, " << std::numeric_limits<unsigned short>::max() << "]\n";

//     std::cout << "int: [" << std::numeric_limits<int>::min() << ", " << std::numeric_limits<int>::max() << "]\n";
//     std::cout << "unsigned int: [0, " << std::numeric_limits<unsigned int>::max() << "]\n";

//     std::cout << "long: [" << std::numeric_limits<long>::min() << ", " << std::numeric_limits<long>::max() << "]\n";
//     std::cout << "unsigned long: [0, " << std::numeric_limits<unsigned long>::max() << "]\n";

//     std::cout << "long long: [" << std::numeric_limits<long long>::min() << ", " << std::numeric_limits<long long>::max() << "]\n";
//     std::cout << "unsigned long long: [0, " << std::numeric_limits<unsigned long long>::max() << "]\n";

//     std::cout << "\n--- Fixed-Width Integer Types ---\n";
//     std::cout << "int8_t: [" << static_cast<int>(std::numeric_limits<int8_t>::min()) << ", " << static_cast<int>(std::numeric_limits<int8_t>::max()) << "]\n";
//     std::cout << "uint8_t: [0, " << static_cast<int>(std::numeric_limits<uint8_t>::max()) << "]\n";

//     std::cout << "int16_t: [" << std::numeric_limits<int16_t>::min() << ", " << std::numeric_limits<int16_t>::max() << "]\n";
//     std::cout << "uint16_t: [0, " << std::numeric_limits<uint16_t>::max() << "]\n";

//     std::cout << "int32_t: [" << std::numeric_limits<int32_t>::min() << ", " << std::numeric_limits<int32_t>::max() << "]\n";
//     std::cout << "uint32_t: [0, " << std::numeric_limits<uint32_t>::max() << "]\n";

//     std::cout << "int64_t: [" << std::numeric_limits<int64_t>::min() << ", " << std::numeric_limits<int64_t>::max() << "]\n";
//     std::cout << "uint64_t: [0, " << std::numeric_limits<uint64_t>::max() << "]\n";

//     std::cout << "\n--- Floating-Point Types ---\n";
//     std::cout << "float: [" << std::numeric_limits<float>::min() << ", " << std::numeric_limits<float>::max() << "]\n";
//     std::cout << "double: [" << std::numeric_limits<double>::min() << ", " << std::numeric_limits<double>::max() << "]\n";
//     std::cout << "long double: [" << std::numeric_limits<long double>::min() << ", " << std::numeric_limits<long double>::max() << "]\n";

//     std::cout << "\n--- Boolean ---\n";
//     std::cout << "bool: [" << std::numeric_limits<bool>::min() << ", " << std::numeric_limits<bool>::max() << "]\n";

//     std::cout << "\n--- Character Types ---\n";
//     std::cout << "char: [" << static_cast<int>(std::numeric_limits<char>::min()) << ", " << static_cast<int>(std::numeric_limits<char>::max()) << "]\n";
//     std::cout << "unsigned char: [0, " << static_cast<int>(std::numeric_limits<unsigned char>::max()) << "]\n";
//     std::cout << "wchar_t: [" << static_cast<int>(std::numeric_limits<wchar_t>::min()) << ", " << static_cast<int>(std::numeric_limits<wchar_t>::max()) << "]\n";
//     std::cout << "char16_t: [" << static_cast<int>(std::numeric_limits<char16_t>::min()) << ", " << static_cast<int>(std::numeric_limits<char16_t>::max()) << "]\n";
//     std::cout << "char32_t: [" << static_cast<int>(std::numeric_limits<char32_t>::min()) << ", " << static_cast<int>(std::numeric_limits<char32_t>::max()) << "]\n";

//     return 0;
// }



#include <iostream>
#include <limits>
#include <cstdint> // For int8_t, uint64_t, etc.

int main() {
    std::cout << "--- Integer Types ---\n";

    short s = 1000;
    std::cout << "short s = " << s << "  Range: ["
              << std::numeric_limits<short>::min() << ", "
              << std::numeric_limits<short>::max() << "]\n";

    unsigned short us = 50000;
    std::cout << "unsigned short us = " << us << "  Range: [0, "
              << std::numeric_limits<unsigned short>::max() << "]\n";

    int i = -123456;
    std::cout << "int i = " << i << "  Range: ["
              << std::numeric_limits<int>::min() << ", "
              << std::numeric_limits<int>::max() << "]\n";

    unsigned int ui = 3000000000;
    std::cout << "unsigned int ui = " << ui << "  Range: [0, "
              << std::numeric_limits<unsigned int>::max() << "]\n";

    long l = 1000000000;
    std::cout << "long l = " << l << "  Range: ["
              << std::numeric_limits<long>::min() << ", "
              << std::numeric_limits<long>::max() << "]\n";

    unsigned long ul = 4000000000;
    std::cout << "unsigned long ul = " << ul << "  Range: [0, "
              << std::numeric_limits<unsigned long>::max() << "]\n";

    long long ll = -9223372036854775807;
    std::cout << "long long ll = " << ll << "  Range: ["
              << std::numeric_limits<long long>::min() << ", "
              << std::numeric_limits<long long>::max() << "]\n";

    unsigned long long ull = 18446744073709551615u;
    std::cout << "unsigned long long ull = " << ull << "  Range: [0, "
              << std::numeric_limits<unsigned long long>::max() << "]\n";


    std::cout << "\n--- Fixed-Width Integers ---\n";

    int8_t i8 = -100;
    std::cout << "int8_t i8 = " << static_cast<int>(i8) << "  Range: ["
              << static_cast<int>(std::numeric_limits<int8_t>::min()) << ", "
              << static_cast<int>(std::numeric_limits<int8_t>::max()) << "]\n";

    uint8_t u8 = 200;
    std::cout << "uint8_t u8 = " << static_cast<int>(u8) << "  Range: [0, "
              << static_cast<int>(std::numeric_limits<uint8_t>::max()) << "]\n";

    int32_t i32 = -100000;
    std::cout << "int32_t i32 = " << i32 << "  Range: ["
              << std::numeric_limits<int32_t>::min() << ", "
              << std::numeric_limits<int32_t>::max() << "]\n";

    uint64_t u64 = 9999999999;
    std::cout << "uint64_t u64 = " << u64 << "  Range: [0, "
              << std::numeric_limits<uint64_t>::max() << "]\n";


    std::cout << "\n--- Floating-Point Types ---\n";

    float f = 3.14f;
    std::cout << "float f = " << f << "  Range: ["
              << std::numeric_limits<float>::min() << ", "
              << std::numeric_limits<float>::max() << "]\n";

    double d = 2.71828;
    std::cout << "double d = " << d << "  Range: ["
              << std::numeric_limits<double>::min() << ", "
              << std::numeric_limits<double>::max() << "]\n";

    long double ld = 1.6180339887;
    std::cout << "long double ld = " << ld << "  Range: ["
              << std::numeric_limits<long double>::min() << ", "
              << std::numeric_limits<long double>::max() << "]\n";


    std::cout << "\n--- Boolean ---\n";

    bool flag = true;
    std::cout << "bool flag = " << flag << "  Range: ["
              << std::numeric_limits<bool>::min() << ", "
              << std::numeric_limits<bool>::max() << "]\n";


    std::cout << "\n--- Character Types ---\n";

    char c = 'A';
    std::cout << "char c = " << c << "  Range: ["
              << static_cast<int>(std::numeric_limits<char>::min()) << ", "
              << static_cast<int>(std::numeric_limits<char>::max()) << "]\n";

    unsigned char uc = 200;
    std::cout << "unsigned char uc = " << static_cast<int>(uc) << "  Range: [0, "
              << static_cast<int>(std::numeric_limits<unsigned char>::max()) << "]\n";

    wchar_t wc = L'Ж';
    std::cout << "wchar_t wc = " << static_cast<int>(wc) << "  Range: ["
              << static_cast<int>(std::numeric_limits<wchar_t>::min()) << ", "
              << static_cast<int>(std::numeric_limits<wchar_t>::max()) << "]\n";

    char16_t c16 = u'अ';
    std::cout << "char16_t c16 = " << static_cast<int>(c16) << "  Range: ["
              << static_cast<int>(std::numeric_limits<char16_t>::min()) << ", "
              << static_cast<int>(std::numeric_limits<char16_t>::max()) << "]\n";

    char32_t c32 = U'字';
    std::cout << "char32_t c32 = " << static_cast<int>(c32) << "  Range: ["
              << static_cast<int>(std::numeric_limits<char32_t>::min()) << ", "
              << static_cast<int>(std::numeric_limits<char32_t>::max()) << "]\n";

    return 0;
}
