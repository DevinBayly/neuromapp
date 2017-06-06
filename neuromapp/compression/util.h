#ifndef UTIL_H
#define UTIL_H

//is this overkill?
namespace neuromapp {
    std::ifstream check_file (std::string fname) {
        struct stat file_check;
        if (stat(fname.c_str(),&file_check) !=0) {
            throw std::runtime_error( std::string ("non-existing file ") + fname);
        }
        std::ifstream in_file(fname);
        return in_file;
    }
}//end neuromapp namespace
#endif