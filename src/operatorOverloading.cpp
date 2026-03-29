//
// Created by NGUELE Steve  on 29/03/2026.
//

#include "../include/operatorOverloading.hpp"

/**
 *
 * @param s
 * @return copy -> the string without space at the beginning and the end
 */
std::string delete_space(std::string const &s) {
    std::string copy { s };

    auto it { std::find_if_not(std::begin(copy), std::end(copy), isspace) };
    copy.erase(std::begin(copy), it);

    std::reverse(std::begin(copy), std::end(copy));
    it = std::find_if_not(std::begin(copy), std::end(copy), isspace);
    copy.erase(std::begin(copy), it);

    std::reverse(std::begin(copy), std::end(copy));

    return copy;
}

std::ostream &operator<<(std::ostream &os, const Song &song) {
    return os << song.title << " | " << song.album << " | " << song.artist;
}

std::ostream &operator<<(std::ostream &os, const Album &album) {
  return os << album.title;
}

std::ostream &operator<<(std::ostream &os, const Artist &artist) {
  return os << artist.name;
}

/*std::istream& operator>>(std::istream &is, Song &song) {

}*/
