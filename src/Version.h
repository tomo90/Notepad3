/******************************************************************************
*                                                                             *
*                                                                             *
* Notepad3                                                                    *
*                                                                             *
* Version.h                                                                   *
*   Based on code from Notepad2-mod, (c) XhmikosR 2010-2015                   *
*                                                                             *
*                                                  (c) Rizonesoft 2008-2018   *
*                                                 https://www.rizonesoft.com  *
*                                                                             *
*                                                                             *
*******************************************************************************/

#ifndef NOTEPAD3_VERSION_H
#define NOTEPAD3_VERSION_H

#include "VersionEx.h"

#ifndef _T
#if !defined(ISPP_INVOKED) && (defined(UNICODE) || defined(_UNICODE))
#define _T(text) L##text
#else
#define _T(text) text
#endif
#endif

#define DO_STRINGIFYA(x)    #x
#define DO_STRINGIFYW(x) _T(#x)
#define STRG(x)     DO_STRINGIFYA(x)
#define TSTRG(x)    DO_STRINGIFYW(x)

// ----------------------------------------------------------------------------

#define MY_APPNAME                   L"Notepad3"

#define VERSION_FILEVERSION_NUM      VERSION_MAJOR,VERSION_MINOR,VERSION_REV,VERSION_BUILD

#define VERSION_FILEVERSION          TSTRG(VERSION_MAJOR) L"." TSTRG(VERSION_MINOR) L"." \
                                     TSTRG(VERSION_REV) L"." TSTRG(VERSION_BUILD)

#define VERSIONA_FILEVERSION         STRG(VERSION_MAJOR) "." STRG(VERSION_MINOR) "." \
                                     STRG(VERSION_REV) "." STRG(VERSION_BUILD)

#if defined(_WIN64)
//   #define VERSION_FILEVERSION_LONG  L"Notepad3 (64-bit) " TSTRG(VERSION_MAJOR) L" Build " TSTRG(VERSION_BUILD)
#define VERSION_FILEVERSION_LONG  L"Notepad3 (64-bit)  " VERSION_FILEVERSION
#define VERSIONA_FILEVERSION_LONG  "Notepad3 (64-bit)  " VERSIONA_FILEVERSION
#else
//   #define VERSION_FILEVERSION_LONG  L"Notepad3 v." TSTRG(VERSION_MAJOR) L" Build " TSTRG(VERSION_BUILD)
#define VERSION_FILEVERSION_LONG  L"Notepad3   " VERSION_FILEVERSION
#define VERSIONA_FILEVERSION_LONG  "Notepad3   " VERSIONA_FILEVERSION
#endif

#define VERSION_LEGALCOPYRIGHT       L"Copyright © 2015-2018 Rizonesoft"
//#define VERSION_LEGALCOPYRIGHT_LONG  L"© Rizonesoft 2015-2018"
#define VERSION_AUTHORNAME           L"© Rizonesoft"
#define VERSION_WEBPAGEDISPLAY       L"https://www.rizonesoft.com"
#define VERSION_COMPANYNAME          L"© Rizonesoft"
//#define VERSION_MODPAGEDISPLAY       L"https://xhmikosr.github.io/notepad2-mod/"
//#define VERSION_WEBPAGE2DISPLAY      L"http://www.flos-freeware.ch"

#define VERSION_SCIVERSION           L"Scintilla Library Version: " TSTRG(SCINTILLA_VER) L"  (RegEx: Onigmo v." TSTRG(ONIGMO_REGEX_VER) L")"

#define VERSION_UPDATE_CHECK         L"https://www.rizonesoft.com/downloads/notepad3/update/?version=" VERSION_FILEVERSION


/*
#define ABOUT_INFO_PLAIN  L"\n" VERSION_FILEVERSION_LONG L"\n\n"\
                          L"Contributors:\n--------------\n"\
                          L"Derick Payne (Rizonesoft)"     L"\t\thttps://www.rizonesoft.com \n"\
                          L"Flo Balmer et al. (Notepad2)"  L"\thttp://www.flos-freeware.ch \n"\
                          L"XhmikosR (Notepad2-mod)"       L"\thttps://xhmikosr.github.io/notepad2-mod/ \n"\
                          L"Kai Liu, RL Vision\n"\
                          L"A.Lekov\n"\
                          L"B.Barbieri\n"\
                          L"M.Ellis (MinimizeToTray)\n"\
                          L"R.Kottenhoff\n"
                          L"\nUsed Libraries:\n--------------\n"\
                          L"N.Hodgson (Scintilla)"         L"\t\thttp://www.scintilla.org \n"\
                          L"K.Takata (Onigmo Regex)"       L"\t\thttps://github.com/k-takata/Onigmo \n"\
                          L"D.Dyer (crypt)\n"\
                          L"T.D.Hanson (uthash)\n"\
*/

// #define ABOUT_INFO_RTF  "{\\rtf1\\ansi\\ansicpg1252\\deff0\\nouicompat\\deflang1031{\\fonttbl{\\f0\\fnil\\fcharset0 Segoe UI;}{\\f1\\fnil\\fcharset0 Calibri;}}"
#define ABOUT_INFO_RTF  "{\\rtf1\\ansi\\ansicpg1252\\deff0\\deflang1033{\\fonttbl{\\f0\\fswiss\\fcharset0 Arial;}}"\
                        "{\\colortbl ;\\red60\\green180\\blue60;}"\
                        "\\viewkind4\\uc1\\pard\\cf1\\f0\\fs20\\b1 " VERSIONA_FILEVERSION_LONG "\\cf0\\uc0\\par"\
                        "\\fs18\\par"\
                        "\\b1\\ul1 Contributors:\\ul0\\b0\\par"\
                        "\\cf0 Derick Payne (Rizonesoft)\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://www.rizonesoft.com }}{\\fldrslt{https://www.rizonesoft.com\\ul0}}}}  \\par"\
                        "\\cf0 Flo Balmer et al. (Notepad2)\\tab {{\\field{\\*\\fldinst{HYPERLINK http://www.flos-freeware.ch }}{\\fldrslt{http://www.flos-freeware.ch\\ul0}}}}  \\par"\
                        "\\cf0 XhmikosR (Notepad2-mod)\\tab {{\\field{\\*\\fldinst{HYPERLINK https://xhmikosr.github.io/notepad2-mod/ }}{\\fldrslt{https://xhmikosr.github.io/notepad2-mod/\\ul0}}}}  \\par"\
                        "\\cf0 Kai Liu, RL Vision\\par"\
                        "\\cf0 A.Lekov\\par"\
                        "\\cf0 B.Barbieri\\par"\
                        "\\cf0 M.Ellis (MinimizeToTray)\\par"\
                        "\\cf0 R.Kottenhoff\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 \\b1\\ul1 Used Libraries:\\ul0\\b0\\par"\
                        "\\cf0 N.Hodgson (Scintilla)\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK http://www.scintilla.org }}{\\fldrslt{http://www.scintilla.org\\ul0}}}}  \\par"\
                        "\\cf0 K.Takata (Onigmo Regex)\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://github.com/k-takata/Onigmo }}{\\fldrslt{https://github.com/k-takata/Onigmo\\ul0}}}}  \\par"\
                        "\\cf0 D.Dyer (NotepadCrypt,Java)\\tab {{\\field{\\*\\fldinst{HYPERLINK https://www.nayuki.io/page/notepadcrypt-format-decryptor-java }}{\\fldrslt{https://www.nayuki.io/page/notepadcrypt-format-decryptor-java}}}}  \\par"\
                        "\\cf0 T.D.Hanson (uthash)\\tab\\tab {{\\field{\\*\\fldinst{HYPERLINK https://troydhanson.github.io/uthash }}{\\fldrslt{https://troydhanson.github.io/uthash\\ul0}}}}  \\par"\
                        "}"

#define ABOUT_INFO_ERRMSG "{\\rtf1\\ansi\\ansicpg1252\\deff0\\deflang1033{\\fonttbl{\\f0\\fswiss\\fcharset0 Arial;}}"\
                          "{\\colortbl ;\\red255\\green0\\blue0;}"\
                          "\\viewkind4\\uc1\\pard\\cf1\\b\\f0\\fs36 AboutDialog Internal Error\\par"\
                          "\\fs20\\par"\
                          "\\cf0 Failed to load RTF from resources, check your code!\\par"\
                          "\\cf0\\b0\\par"\
                          "}"


// Compiler specific
#if defined(_MSC_VER)
    #if (_MSC_VER >= 1912)
        #if(_MSC_FULL_VER >= 191225835)
            #define VER_CPL     "Microsoft Visual C++ 2017  Ver. 15.5.(5-7)"
        #elif(_MSC_FULL_VER >= 191225834)
            #define VER_CPL     "Microsoft Visual C++ 2017  Ver. 15.5.(3-4)"
        #elif(_MSC_FULL_VER >= 191225831)
            #define VER_CPL     "Microsoft Visual C++ 2017  Ver. 15.5.2"
        #elif(_MSC_FULL_VER >= 191225830)
            #define VER_CPL     "Microsoft Visual C++ 2017  Ver. 15.5"
        #else
            #define VER_CPL     "Microsoft Visual C++ 2017 (version unknown)"
        #endif
    #elif (_MSC_VER >= 1911)
        #if((_MSC_FULL_VER >= 191125542) && (_MSC_FULL_VER <= 191125547))
           #define VER_CPL     "Microsoft Visual C++ 2017  Ver. 15.4"
        #elif((_MSC_FULL_VER >= 191125506) && (_MSC_FULL_VER <= 191125508))
           #define VER_CPL     "Microsoft Visual C++ 2017  Ver. 15.3"
        #else
           #define VER_CPL     "Microsoft Visual C++ 2017 (version unknown)"
        #endif
    #elif (_MSC_VER >= 1910)
        #if ((_MSC_FULL_VER >= 191025017) && (_MSC_FULL_VER <= 191025019))
           #define VER_CPL     "Microsoft Visual C++ 2017  Ver. 15.2"
        #else
            #define VER_CPL    "Microsoft Visual C++ 2017  RC"
        #endif
    #elif (_MSC_VER == 1900)
        #if (_MSC_FULL_VER == 190024210) || (_MSC_FULL_VER == 190024215)
            #define VER_CPL    "Microsoft Visual C++ 2015  Update 3"
        #elif (_MSC_FULL_VER == 190023918)
            #define VER_CPL    "Microsoft Visual C++ 2015  Update 2"
        #elif (_MSC_FULL_VER == 190023506)
            #define VER_CPL    "Microsoft Visual C++ 2015  Update 1"
        #elif (_MSC_FULL_VER == 190023506)
            #define VER_CPL    "Microsoft Visual C++ 2015  Update 1"
        #else
            #define VER_CPL    "Microsoft Visual C++ (version unknown)"
        #endif
    #else
        #define VER_CPL        "Microsoft Visual C++ (version unknown)"
    #endif
#else
    #define VER_CPL            "(Unknown compiler)"
#endif

#define VERSION_COMPILER  L"Compiled with: " TSTRG(VER_CPL)

#pragma message("Compiler Version: " VER_CPL "  (#" STRG(_MSC_FULL_VER) ")")

#endif // NOTEPAD3_VERSION_H
