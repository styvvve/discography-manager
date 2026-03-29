//
// Created by NGUELE Steve  on 29/03/2026.
//

#pragma once

#include <iostream>
#include <string>
#include "album.hpp"
#include "artist.hpp"

struct Song {
  std::string title;
  Album album;
  Artist artist;
};
