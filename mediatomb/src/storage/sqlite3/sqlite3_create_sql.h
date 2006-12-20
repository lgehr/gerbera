/*MT*
    
    MediaTomb - http://www.mediatomb.org/
    
    sqlite3_create_sql.h - this file is part of MediaTomb.
    
    Copyright (C) 2005 Gena Batyan <bgeradz@mediatomb.org>,
                       Sergey Bostandzhyan <jin@mediatomb.org>
    Copyright (C) 2006 Gena Batyan <bgeradz@mediatomb.org>,
                       Sergey Bostandzhyan <jin@mediatomb.org>,
                       Leonhard Wimmer <leo@mediatomb.org>
    
    MediaTomb is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2
    as published by the Free Software Foundation.
    
    MediaTomb is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    version 2 along with MediaTomb; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
    
    $Id$
*/

/// \file sqlite3_create_sql.h

#ifdef AUTO_CREATE_DATABASE
#ifdef HAVE_SQLITE3

#ifndef __SQLITE3_CREATE_SQL_H__
#define __SQLITE3_CREATE_SQL_H__

#define SL3_CREATE_SQL_INFLATED_SIZE 2648
#define SL3_CREATE_SQL_DEFLATED_SIZE 702

/* begin binary data: */
const unsigned char sqlite3_create_sql[] = /* 702 */
{0x78,0x9C,0xAD,0x56,0xDB,0x6E,0xE2,0x30,0x10,0x7D,0xE7,0x2B,0xAC,0xBC,0x24
,0x95,0xD8,0x15,0x54,0x5B,0x69,0xAB,0x3E,0xA5,0xC1,0xAD,0xA2,0xA5,0x49,0x15
,0xC2,0x6A,0xF7,0xC9,0x72,0x13,0x03,0xDE,0xE6,0x26,0xDB,0x41,0xE5,0xEF,0xD7
,0x4E,0x20,0x24,0x38,0x40,0x2A,0x55,0x42,0x08,0x66,0xCE,0x99,0x19,0xCF,0xCD
,0x7E,0x84,0xCF,0xAE,0x07,0xC2,0xC0,0xF6,0x16,0xB6,0x13,0xBA,0xBE,0xF7,0x30
,0x72,0x02,0x68,0x87,0x10,0x84,0xF6,0xE3,0x1C,0x02,0x23,0x15,0x28,0x8A,0x39
,0xCA,0xDF,0xFE,0x91,0x48,0x18,0xC0,0x1A,0x01,0x60,0xD0,0xD8,0x00,0x34,0x13
,0x64,0x4D,0x18,0x28,0x18,0x4D,0x31,0xDB,0x81,0x77,0xB2,0x1B,0x2B,0x1D,0x23
,0x2B,0xD4,0xD6,0xC7,0x64,0x85,0xCB,0x44,0x00,0x6F,0x39,0x9F,0x57,0x80,0x02
,0x33,0x92,0x89,0x0E,0xC6,0xF3,0xC3,0x4A,0xDF,0x80,0xCD,0x89,0x59,0x61,0x6B
,0xAF,0x48,0xEC,0x0A,0x62,0x00,0x41,0xB3,0x9D,0x64,0x80,0x32,0xE3,0x74,0x9D
,0x91,0xB8,0xA1,0x55,0xD0,0xB2,0xC8,0x0A,0x14,0x25,0x98,0x73,0x03,0x6C,0x31
,0x8B,0x36,0x98,0x59,0x3F,0x27,0x37,0xBA,0xFF,0x38,0x42,0x82,0x8A,0x84,0x1C
,0x61,0xB7,0x77,0x77,0x3D,0xB8,0x24,0x8F,0xB0,0xA0,0x79,0x26,0x1D,0x93,0x0F
,0x71,0x5E,0x8F,0x36,0x98,0x6F,0x8E,0x67,0x69,0xA2,0xD3,0x08,0x29,0x11,0x38
,0xC6,0x02,0x9F,0x33,0x88,0xCB,0x8F,0x4B,0x6A,0x46,0x78,0x5E,0xB2,0x88,0xF0
,0x73,0x80,0xB2,0x90,0x74,0x32,0x2C,0xB1,0x29,0x4D,0xC9,0x3E,0xAD,0x87,0x2C
,0xFC,0xE8,0x4B,0xD6,0x2A,0xC1,0x6B,0xDE,0x73,0x38,0xDD,0xF0,0xB4,0x32,0xEC
,0xF8,0xDE,0x42,0x36,0x93,0xEB,0x85,0xC0,0x38,0xB6,0x0D,0xA2,0x6F,0xAB,0x77
,0x34,0x35,0xC0,0x93,0x1F,0x40,0xF7,0xD9,0x03,0xBF,0xE0,0x5F,0x60,0x1D,0x5A
,0xE5,0x06,0x04,0xF0,0x09,0x06,0xD0,0x73,0xE0,0xA2,0xCD,0x92,0xCD,0x66,0x54
,0x6A,0xDF,0x03,0x33,0x38,0x87,0xB2,0x27,0x1D,0x7B,0xE1,0xD8,0x33,0xA8,0x24
,0xCB,0xD7,0x99,0x7D,0x94,0x5C,0xF3,0x7D,0x7B,0xEA,0xFB,0xD8,0x85,0x5F,0xE1
,0x7E,0x74,0xF3,0x30,0x72,0xBD,0x05,0x0C,0x42,0x20,0xDD,0xFB,0xDA,0xD4,0xFC
,0xB6,0xE7,0x4B,0xB8,0xB0,0xBE,0x4D,0xC7,0x75,0x6A,0x81,0xFA,0x35,0x39,0xFC
,0x19,0xF2,0xDD,0x80,0xEF,0x87,0xB9,0x9A,0xB4,0x3D,0xC9,0x8F,0x59,0xEB,0xBF
,0x47,0x79,0x26,0x30,0xCD,0x08,0x33,0xA5,0x2C,0xC8,0x73,0x61,0x7E,0xB5,0xE7
,0x69,0x8B,0x78,0xCE,0xF1,0xAB,0x03,0x66,0x94,0x49,0x71,0xCE,0x76,0x9F,0x0B
,0xA0,0x77,0x39,0xE1,0x48,0xD0,0xAD,0xEC,0x7C,0x41,0xD2,0x01,0x1B,0x4A,0xA1
,0xD5,0x58,0x77,0xC6,0xBF,0xB3,0x4B,0xB8,0x90,0x83,0x74,0x01,0xD0,0xEE,0x34
,0x3D,0x84,0x33,0xDD,0xAE,0xB5,0xDA,0xE9,0x66,0xFD,0x54,0xB7,0x69,0x79,0x50
,0xA7,0x65,0x19,0x4E,0x10,0x27,0x42,0x6E,0xCA,0xF5,0x3E,0x11,0xF2,0xD0,0xDD
,0x11,0x6F,0x65,0xA3,0x7B,0xE8,0x2D,0x4E,0xCA,0x73,0x87,0xEE,0xEB,0x6F,0xDD
,0xE1,0xBE,0x01,0xCC,0xF8,0x0D,0x6D,0x09,0xE3,0x32,0xC9,0xAA,0xD6,0x53,0xB3
,0x2F,0x5C,0x5C,0x8A,0x9C,0x47,0x38,0x1B,0x50,0x2F,0x99,0xA0,0xCB,0x37,0x8A
,0xB2,0x83,0x12,0xB2,0x25,0xC9,0x31,0xFC,0xE9,0xE4,0xB4,0xA6,0x0A,0x94,0xE6
,0x31,0xB9,0x80,0x91,0x1D,0x59,0xCA,0xB8,0xB7,0x57,0x2F,0x9B,0x0D,0x8D,0x63
,0x92,0x5D,0x43,0x55,0x19,0x92,0x69,0x1D,0x72,0x39,0xC8,0x8B,0x4B,0xA8,0xF0
,0xE8,0x8A,0x92,0x78,0x08,0xA1,0x50,0x19,0xE6,0x42,0x2E,0xB1,0x0B,0x61,0x68
,0x7B,0xFF,0xDA,0xA5,0x26,0xF2,0x32,0xDA,0xA8,0x00,0x06,0x98,0xD4,0x37,0x7E
,0xAB,0xAE,0x55,0xC5,0xBA,0x03,0xB0,0xAF,0xE3,0xD7,0x0F,0x81,0xEB,0xCD,0xE0
,0x1F,0xD0,0xB1,0x84,0xEA,0xBB,0x45,0xD1,0x3A,0x72,0xAB,0x96,0x5F,0xE6,0x36
,0x77,0x83,0x4E,0x6F,0x54,0xE3,0xD6,0xD3,0x64,0x7C,0x78,0x52,0xF4,0x98,0x6D
,0xC1,0x74,0x6B,0x2D,0x65,0x0F,0xB5,0x79,0x60,0xD4,0x4E,0x75,0x7A,0xE7,0x05
,0x32,0x6E,0x42,0xEB,0x31,0x75,0x3A,0xAB,0x48,0x4D,0x7F,0x6D,0xEF,0x54,0x65
,0x49,0x55,0x8F,0x85,0xA6,0xAE,0x75,0x15,0xF7,0xE4,0x83,0xD4,0xAA,0xA5,0x8A
,0xE7,0xBF,0xBC,0xB8,0xE1,0xC3,0xE8,0x3F,0x9E,0x65,0x34,0x46};
/* end binary data. size = 702 bytes */

#endif // __SQLITE3_CREATE_SQL_H__

#endif // HAVE_SQLITE3
#endif // AUTO_CREATE_DATABASE
