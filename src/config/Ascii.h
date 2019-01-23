// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
"\n____  _                               _____ __  __ \n"
" / __ \| |                             |_   _|  \/  |\n"
" | |  | | |__  ___  ___ _   _ _ __ ___    | | | \  / |\n"
" | |  | | '_ \/ __|/ __| | | | '__/ _ \   | | | |\/| |\n"
" | |__| | |_) \__ \ (__| |_| | | |  __/_ _| |_| |  | |\n"
" \____/|_.__/|___/\___|\__,_|_|  \___(_)_____|_|  |_|\n";

const std::string nonWindowsAsciiArt =

"\n____  _                               _____ __  __ \n"
" / __ \| |                             |_   _|  \/  |\n"
" | |  | | |__  ___  ___ _   _ _ __ ___    | | | \  / |\n"
" | |  | | '_ \/ __|/ __| | | | '__/ _ \   | | | |\/| |\n"
" | |__| | |_) \__ \ (__| |_| | | |  __/_ _| |_| |  | |\n"
" \____/|_.__/|___/\___|\__,_|_|  \___(_)_____|_|  |_|\n";




/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
