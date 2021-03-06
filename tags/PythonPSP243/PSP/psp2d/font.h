
/**
 * @file font.h
 */

/**********************************************************************

  Created: 05 Nov 2005

**********************************************************************/
// $Id: font.h 1468 2005-11-20 12:18:29Z fraca7 $

#ifndef _PYFONT_H
#define _PYFONT_H

#include <Python.h>
#include <libpsp2d/Font.h>

typedef struct
{
      PyObject_HEAD

      PSP2D::Font *fnt;
} PyFont;

extern PyTypeObject* PPyFontType;

#endif /* _PYFONT_H */
