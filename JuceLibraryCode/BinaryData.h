/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   backgroundlight_png;
    const int            backgroundlight_pngSize = 114498;

    extern const char*   background_png;
    const int            background_pngSize = 87582;

    extern const char*   Louis_George_Cafe_Bold_ttf;
    const int            Louis_George_Cafe_Bold_ttfSize = 34484;

    extern const char*   Louis_George_Cafe_Light_ttf;
    const int            Louis_George_Cafe_Light_ttfSize = 32552;

    extern const char*   Louis_George_Cafe_ttf;
    const int            Louis_George_Cafe_ttfSize = 32020;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 5;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}