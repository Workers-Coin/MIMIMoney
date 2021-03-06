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
//
// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, MIMI Money Project
//
// Please see the included LICENSE file for more information.


#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
            
{       0, "1b7ec2d6847638d4071a94f4516c0f46a0b21d9a8bd9242ef71ae9b0fe909ea5"},
{   10000, "5d7fceda0cd676f65e1ceeaebcbfc0e4a8afc49b765c0a888863816b1429cc60"},
{   20000, "57198fef17d0983fb6152f27dd0528ed81917699a371c04fd1889049464ab1b2"},
{   30000, "e44e7f486d11fde2aaf0d7774172d55adb3bee4208e18fc3cb73e016d9edf49c"},
{   40000, "6a14eb26a150f87499a1c09fa4ada782ca8c4b3a7107b74f31afc2e440cbf7fa"},
{   50000, "231b8987de30160337c67a2738d97e98287f956ccee9a9afa32a3000842284a1"},
{   60000, "ac88ac94ad3716557397fb0a35995e285bcf78a3653fe5fbb6850d56c85c31ef"},
{   70000, "ddc21274b9ca3b48e49022f5e0925744d102d8851820a83a30097e44b12bfb8b"},
{   80000, "b15325b23522060d91eceb50b769b6d5ec4355f3c721b0de202bce17f6fb3525"},
{   90000, "45d4a61cbd4821dc31aab9d216c07ef207ecbffd145ec5a41a3e7660c421c1b8"},
{   100000, "8650ed928817f449462269e02001ef69cd270a587aa7d9efc17b4c7add1ddc6f"},
{   110000, "e3a41708ab8c72875a484356aa2fa97550fdd8fd97b88d5f0b7f211085a9bd98"},
{   120000, "b10294181e9b0579cfeb50da7c5d05c8687cf5002c736bd547ddd3ca76b0c134"},
{   130000, "f7192ac10887ac8bc5e08c23f56919a9deb19389ea4a70ed21fa79e2321cfee2"},
{   140000, "2075a026efffefab4357bdb8673d3317312745de5aacf38d981bf081478f4ade"},
{   150000, "0df11605300245ae9c89beb49d231edbcedca2094a413a7e04206036e6283c4d"},
{   160000, "d22986b1a10206b254dafb1922bb643b466714a611acef7cdb09471e081c6e00"},
{   170000, "35968d0e2a36ad8814113db959076bda68c0e573421eb7d9c5a27deb17cbd52a"},
{   180000, "d884487d1037b951ebd6a0669b00648b0d4804ffdeb465c183a5f0cb75a33851"},
{   190000, "7e9a2ddf9b757912980f50d623bab5ad0074fcc042fe4a3e9ae6bb0e58991f49"},
{   200000, "df8fff0de4993262f1fcc694a508bc38d1123a7046ef6dd4e9d67026a8e7bf16"},
{   210000, "b36e46b42a693ce0d3efcf18bf352a8b9e35faa84b3f31fb915cde96b65e94aa"},
{   220000, "07cdad873c1c5e57ce2841c9e3faaa78ecb0bcc8a9016cd16e3c055cecae5b0c"},
{   230000, "137165db01f1236768ac5082dca0986a912f3126e2f1f1b6f135b74db637bc43"},
{   240000, "f5869bd331c40cdfb2e2dfa190b2f4679108c2f1e4ba2db3a42e290c428d7d70"},
{   250000, "b14b5a9f1ef995ff7374c72948bac90f81702a21f9d18d301382ed8ec0ea109b"},
{   260000, "99f1ee102be463910777bca8b70af2aae3ac9dcc19097a1579c989874f64fa6a"},
{   270000, "7bf58384a6675706de768e45f8eb31f5c8323af7498b021e66a196dad83efa53"},
{   280000, "33d09e44a049c2506fa04533fb9927e388f2f674b161c49c661144ff7bca1ba5"},
{   290000, "1ed4b046496391a371f93cec5d2d307607f7776fd562ba179502a84b99d8d7fb"},
{   300000, "6dd8c50ed3e930121c0674951dcd4fb3a3873801861bda1a919ce000a9384593"},
{   310000, "487d3346625ee43e783aad4e4534845f3dce3fbd2fe05216a7125b23d36f86d5"},
{   320000, "8b31f4aacf8203f9943084cbb49de38245f9462fcd5a81ba7c0b7dc634dd1833"},
{   330000, "b68b4509d5427e1b95ebf8113343eba2ad3251b6e4798e6472397b5949f0b7c8"},
{   340000, "ed46cb09cc634527f3704413c6fa9772228a44bcf2b6c14bf865146336ffc5bc"},
{   350000, "1d67e89dacde7c7f3354d62511fdb1275c47e5a3003d6e3943e088a3b4d983e8"},
{   360000, "53d0e93ea85b5ad0937d8a0595dca7756dff0c98bd1695f5112564fd15fc2aac"},
{   370000, "38f1f5d957d42cebd0241f15407f1b3f56cc110e44e1b9755e20f09a090a29ea"},
{   380000, "a3f0ea87f19916a888260e1efbbfae4975517369d3a2781e6685bb182041543a"}
};
}
