#include <geo3dml/Utils.h>
#include <cmath>
#include <cctype>

bool geo3dml::IsZero(double v) {
    return std::fabs(v) <= 10e-6;
}

bool geo3dml::IsTrue(const std::string& s) {
    if (IsiEqual(s, "1")) {
        return true;
    } else if (IsiEqual(s, "true")) {
        return true;
    } else if (IsiEqual(s, "yes")) {
        return true;
    } else if (IsiEqual(s, "t")) {
        return true;
    } else {
        return IsiEqual(s, "y");
    }
}

bool charCmp(const char& c1, const char& c2) {
    if (c1 == c2) {
        return true;
    } else {
        return std::tolower(c1) == std::tolower(c2);
    }
}

bool geo3dml::IsiEqual(const std::string& a, const std::string& b) {
#ifdef _WIN32
    return _stricmp(a.c_str(), b.c_str()) == 0;
#else
    if (a.size() != b.size()) {
        return false;
    } else {
        return std::equal(a.cbegin(), a.cend(), b.cbegin(), &charCmp);
    }
#endif
}
