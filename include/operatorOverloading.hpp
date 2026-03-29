//
// Created by NGUELE Steve  on 29/03/2026.
//

#pragma once

#include <iostream>
#include <string>
#include <algorithm>

#include "song.hpp"
#include "album.hpp"
#include "artist.hpp"

std::ostream &operator<<(std::ostream &os, const Song &song);
std::ostream &operator<<(std::ostream &os, const Album &album);
std::ostream &operator<<(std::ostream &os, const Artist &artist);

std::string delete_space(std::string const &s);

std::istream& operator>>(std::istream &is, Song &song);