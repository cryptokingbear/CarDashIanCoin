// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2019, Car Dash Ian Coin Developers
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

// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2018-2019, The DeroGold Assosiation
// Copyright (c) 2018-2019, The BitcoinMono Developers
// Copyright (c) 2019-2019, The Tellurium Developers
// Please see the included LICENSE file for more information


#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
{       0, "cbcd38875272a5a5735fc1ad17e5f71b37cf0eeeb85ee00c1986e5d6690256bc"},
{       1, "bc328a2145f84ee2529066553016fc2c92b918937f16c601390924a8d9f496a4"},
{       2, "6a9d6c986051b92a741473a799037af64a1a3a1fb0d8ac1c5de5f467e1671fe9"},
{       3, "e95ddc451bee84112231a374dcb17c27f0504ef3b7d429aca042fac4634befeb"},
{       4, "6a347c92fafeb27dd580b787de43d2636df35cec736c4a5be51bb3e0bb8d1989"},
{       5, "1ab0ef36f9b80cb3c119049f919ad439eebc908e900338660c2b6a99bcf96027"},
{      50, "48a0bb5e2153a6de4697035193b1d5dd9bfbf45e17041869395edc57f4badec2"},
{     100, "c4368098441728b89504a4719450f7a04741af2c206bc5ce6fe571e4524414d7"},
{     250, "c38b9dff65dd524142e8e242129f4923289bb8bbfec10f32b2e904b548422056"},
{     500, "55d131d342d75556909f41abe97528358808775708957c6103d45c0cab01c41e"},
{    1000, "86e8a3c6066f641168b958f2c711f339f81b3283db0175e05dec4c88760fd1f1"},
{    2500, "664d7b975f0e9fb542b20883261ddbdc85baf4351be76c647d424e8204776e11"},
{    5000, "7d7ac874605828bc83e4b4d68185753ec80929c26fd2b9388721216d196cd5d8"},
{    6500, "cb364bbc6b26088e0f4433d387baea83dfde2a59f5823939c357cb1eb0b08d07"},
{    8000, "147cd5b35cb8b6c3bf53c511dddb93e7ccfecec2ec79fec12055d6b91e627ab4"},
{   10000, "9e7dd2658a9fee91ab1e5742cd0bc738ca32540b700a8292833badb00d1d58b4"}
};
}
