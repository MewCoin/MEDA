// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {0,"26cc724fbf60b96b17b74be2a7df726d520a430900f1bc3d516637c07cc46082"},
  {1000,"c5173b5b02f2dc1a0d2f202a2fd7e47957623b7e0a20acdc672856677b9f0e1e"},
  {100000,"ea0af04c0084f5a52835f5a783b27252754fa7a02659ef47ea8134f0992f31f7"},
  {200000,"fe03fa01e00cab9a00c7862d5026a7d4becd8ad6513e8c00c16093a808493a37"},
  {250000,"f605e98f190363026d0531b8779d20da6469fc3de393f031766f4909026fbd92"},
  {300000,"35982d60496d285c3d751f874eebdc8b209a3356b9bc73a972e99ece977d028d"},
  {400000,"3fcb9e9736ce82c280c02c445638124b517d8a8dec2df435e03a79e470a94e89"}
};
}
