//
// Copyright 2017-2019 Timo Kloss
//
// This file is part of LowRes NX.
//
// LowRes NX is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// LowRes NX is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with LowRes NX.  If not, see <http://www.gnu.org/licenses/>.
//

#include "token.h"

const char *TokenStrings[] = {
    NULL,
    
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    
    // Signs
    ":",
    ",",
    ";",
    "'",
    NULL,
    
    // Operators
    "=",
    ">=",
    "<=",
    "<>",
    ">",
    "<",
    "(",
    ")",
    "+",
    "-",
    "*",
    "/",
    "\\",
    "^",
    "AND",
    "NOT",
    "OR",
    "XOR",
    "MOD",
    
    // Commands/Functions
    "ABS",
    "ACOS",
    "ADD",
    "ASC",
    "ASIN",
    "ATAN",
    "ATTR",
    "BG",
    "BIN$",
    "BUTTON",
    "CALL",
    "CELL.A",
    "CELL.C",
    "CELL",
    "CHAR",
    "CHR$",
    "CLS",
    "CLW",
    "COLOR",
    "COPY",
    "COS",
    "CURSOR.X",
    "CURSOR.Y",
    "DATA",
    "DEC",
    "DIM",
    "DISPLAY",
    "DOWN",
    "DO",
    "ELSE",
    "END",
    "ENVELOPE",
    "EXIT",
    "EXP",
    "FILE$",
    "FILES",
    "FILL",
    "FLIP",
    "FONT",
    "FOR",
    "FSIZE",
    "GAMEPAD",
    "GLOBAL",
    "GOSUB",
    "GOTO",
    "HEX$",
    "HCOS",
    "HIT",
    "HSIN",
    "HTAN",
    "IF",
    "INC",
    "INKEY$",
    "INPUT",
    "INSTR",
    "INT",
    "KEYBOARD",
    "LEFT$",
    "LEFT",
    "LEN",
    "LET",
    "LFO.A",
    "LFO",
    "LOAD",
    "LOCATE",
    "LOG",
    "LOOP",
    "MAX",
    "MCELL.A",
    "MCELL.C",
    "MCELL",
    "MID$",
    "MIN",
    "MUSIC",
    "NEXT",
    "NUMBER",
    "OFF",
    "ON",
    "OPTIONAL",
    "PALETTE",
    "PAL",
    "PAUSE",
    "PEEKL",
    "PEEKW",
    "PEEK",
    "PI",
    "PLAY",
    "POKEL",
    "POKEW",
    "POKE",
    "PRINT",
    "PRIO",
    "RANDOMIZE",
    "RASTER",
    "READ",
    "REM",
    "REPEAT",
    "RESTORE",
    "RETURN",
    "RIGHT$",
    "RIGHT",
    "RND",
    "ROL",
    "ROM",
    "ROR",
    "SAVE",
    "SCROLL.X",
    "SCROLL.Y",
    "SCROLL",
    "SGN",
    "SIN",
    "SIZE",
    "SOUND",
    "SOURCE",
    "SPRITE.A",
    "SPRITE.C",
    "SPRITE.X",
    "SPRITE.Y",
    "SPRITE",
    "SQR",
    "STEP",
    "STOP",
    "STR$",
    "SUB",
    "SWAP",
    "SYSTEM",
    "TAN",
    "TAP",
    "TEXT",
    "THEN",
    "TIMER",
    "TINT",
    "TOUCHSCREEN",
    "TOUCH.X",
    "TOUCH.Y",
    "TOUCH",
    "TO",
    "TRACE",
    "TRACK",
    "UBOUND",
    "UNTIL",
    "UP",
    "VAL",
    "VBL",
    "VIEW",
    "VOLUME",
    "WAIT",
    "WAVE",
    "WEND",
    "WHILE",
    "WINDOW",
    
    // Reserved Keywords
    NULL,
    "ANIM",
    "CLOSE",
    "DECLARE",
    "DEF",
    "FLASH",
    "FN",
    "FUNCTION",
    "LBOUND",
    "OPEN",
    "OUTPUT",
    "SHARED",
    "STATIC",
    "TEMPO",
    "VOICE",
    "WRITE",

    NULL
};
