// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The Calex Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <cstddef>
#include <cinttypes>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {       0, "34f61e2d54906689fc249f0d1aecda614ad3434074009a9bfa350bc6b9ef1ff5"},
  {       2, "7ad1ec5d6aa83e315cff3a7eaf09cd75973bf6526036e55373dd01c484f5ac99"},
  {    5000, "09158af9e50f58778e87e2c47450be18a9fdaf8c853d06523da8824e04ab3f51"}
};
}

